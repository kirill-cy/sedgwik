#pragma once

#include <cstddef>
#include <iostream>
#include <chrono>

#define duration(a) std::chrono::duration_cast<std::chrono::nanoseconds>(a).count()
#define timeNow() std::chrono::high_resolution_clock::now()

namespace sorting {

    template<typename F, typename... Args>
    static void executeWithBenchmark(F func, Args&&... args) {
        auto start = std::chrono::high_resolution_clock::now();
        func(std::forward<Args>(args)...);
        auto finish = std::chrono::high_resolution_clock::now();
        std::cout << duration(finish - start) << std::endl;
    }

    template<size_t size>
    static std::array<int, size> generateIntArray() {
        std::array<int, size> array = {};
        for(auto it = array.begin(); it != array.end(); it++) {
            *it = std::rand() % 1000;
        }
        return array;
    }

    template<typename T>
    static bool less(T first, T second) {
        return first < second;
    }

    template<typename T>
    static void exchange(T* a, T i, T j) {
        auto temp = a[i];
        a[i] = a[j];
        a[j] = temp;
    }

    template<typename T, size_t size>
    static void print(const std::array<T, size> arr) {
        for (int i = 0; i < size; i++) {
            std::cout << arr[i] << " ";
        }
        std::cout << std::endl;
    }
}
