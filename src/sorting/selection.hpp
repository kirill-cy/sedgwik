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
}
