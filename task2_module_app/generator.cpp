#include "generator.hpp"
#include <ctime>
#include <iostream>
#include <random>

int* drw::generate_arr(const int arr_size) {
    int* arr = new int[arr_size];
    std::mt19937 mt(time(nullptr));
    for (int i = 0; i < arr_size ; i++) {
        arr[i] = (mt() % 100) + 100;
        }
    return arr;
}
