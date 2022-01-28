#pragma once

#include <cstddef>
#include "utils.hpp"

namespace sorting {
    template<typename T, size_t size>
    static auto selection_sort(T (&array)[size]) {
        for (int i = 0; i < size; i++) {
            int min = i;
            for (int j = i+1; j < size; j++) {
                if (less(array[j], array[min])) {
                    min = j;
                }
            }
            exchange(array, i, min);
        }
    }

    template<typename T, size_t size>
    static auto insertion_sort(T (&array)[size]) {
        for (int i = 1; i < size; i++) {
            for (int j = i; j > 0 && less(array[j], array[j-1]); j--) {
                exchange(array, j, j-1);
            }
        }
    }
}
