#include <cassert>

int fiboNaive(int n) {
    assert(n => 0);
    return n < 2 ? n : fiboNaive(n-1) + fiboNaive(n-2);
}

//implement fiboIterative
int fiboIterative(int n){
    assert (n >= 0);
    if (n < 2){
        return n;
    }
    int fibo_prev = 0;
    int fibo_recc = 1;
    for (int i = 2; i < n; i++){
      int fibo_next = fibo_prev + fibo_recc;
        fibo_prev = fibo_recc;
        fibo_recc = fibo_next;
    }
    return fibo_recc;
}

#include <pybind11/pybind11.h>
PYBIND11_MODULE(myfibo, m) {

    //export fiboNaive (as fibo_naive)
     m.def("fibo_naive", &fiboNaive);
     //export fiboIterative (as fibo_iterative)
     m.def("fibo_itarative", &fiboIterative);
}

