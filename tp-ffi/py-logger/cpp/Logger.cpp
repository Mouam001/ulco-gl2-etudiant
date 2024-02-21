#include "Logger.hpp"

#include <algorithm>
#include <iomanip>
#include <map>
#include <sstream>

void Logger::addItem(Level l, const std::string & m) {
  //implement Logger::addItem
  _items.emplace_back(l, m);
}


std::string Logger::reportByAdded() const {
   std::stringstream ss;
    for (const auto & item : _items) {
        ss << "[" << static_cast<char>(std::get<0>(item)) << "] " << std::get<1>(item) << std::endl;
    }
    return ss.str();
}


std::string Logger::reportByLevel() const {
    std::map<Level, std::vector<std::string>> groupedItems;
    for (const auto & item : _items) {
        groupedItems[std::get<0>(item)].push_back(std::get<1>(item));
    }
    std::stringstream ss;
    for (const auto & pair : groupedItems) {
        for (const auto & message : pair.second) {
            ss << "[" << static_cast<char>(pair.first) << "] " << message << std::endl;
        }
    }
    return ss.str();
}

