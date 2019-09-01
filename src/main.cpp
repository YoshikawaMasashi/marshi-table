#include <pybind11/pybind11.h>
#include <malloc.h>
#include <stdio.h>

namespace py = pybind11;

int add(int i, int j) {
    return i + j;
}


PYBIND11_MODULE(_core, m) {
    m.doc() = "marshi_table";
    
    m.def("add", &add, R"pbdoc(
        Add two numbers
        Some other explanation about the add function.
    )pbdoc");
    m.def("malloc_stats", &malloc_stats);
    m.def("malloc_trim", &malloc_trim);
}
