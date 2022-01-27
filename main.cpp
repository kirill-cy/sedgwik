
#include <iostream>
#include <array>
#include "src/sorting/selection.hpp"
#include "src/sorting/utils.hpp"

using namespace sorting;

int main() {
    int arr[10] = {3,14,5,19,22,13,0,1,5,55};
    executeWithBenchmark(selection_sort<int,10>, arr);

    print(arr);
    std::getchar();
    return 0;
}
