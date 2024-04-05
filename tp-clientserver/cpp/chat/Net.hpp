#include <hv/WebSocketServer.h>

#include <list>
#include <thread>

class Net {
    private:
        std::list<WebSocketChannelPtr> _channels;
        int numero_client = 1;

        // pour gérer les noms de client :
        // std::list<WebSocketChannelPtr> _pendings;
        // std::map<WebSocketChannelPtr, std::string> _connections;

    public:
        Net() = default;
        Net(const Net &) = delete;

        void add(const WebSocketChannelPtr & c) {
            _channels.push_front(c);
            std::string msg = "client" + std::to_string(numero_client) + "Connected";
            broadcast(msg);
            numero_client++;
        }

        void del(const WebSocketChannelPtr & c) {
            auto it = std::find(_channels.begin(), _channels.end(), c);
            if (it != _channels.end())
                _channels.erase(it);
        }

        void map(std::function<void(const WebSocketChannelPtr &)> f) {
            for (const WebSocketChannelPtr & c : _channels)
                f(c);
        }

        void broadcast(const std::string &msg) {
        for (const WebSocketChannelPtr &c : _channels)
            c->send(msg);
    }

        // pour gérer les noms de client :
        // bool giveName(const WebSocketChannelPtr& c, const std::string& n)
        // bool isPending(const WebSocketChannelPtr& c) const
        // std::optional<std::string> findName(const WebSocketChannelPtr& c) const

};

