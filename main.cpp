
#include <iostream>
#include <array>
#include "src/sorting/selection.hpp"
#include "src/sorting/utils.hpp"

using namespace sorting;

int main() {
    auto arr = generateIntArray<100>();
    executeWithBenchmark(sort<int,100>, arr);

    std::getchar();
    return 0;
}
