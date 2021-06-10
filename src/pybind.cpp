#include <pybind11/pybind11.h>
#include "myclass.h"

int add(int j) {
    return MyClass(3).add(j);
}

PYBIND11_MODULE(example, m) {
    m.doc() = "pybind11 example plugin"; // optional module docstring

    m.def("add", &add, "A function which adds two numbers");
}
