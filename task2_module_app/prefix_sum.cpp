#include "prefix_sum.hpp"

int* drw::calc_prefix_sum(int*& arr, const int arr_size, const int max_value) {
    int* frequency_arr = new int[max_value];
    for (int i = 0; i < arr_size ; i++) {
        frequency_arr[arr[i]] += 1;
    }
    
    int* prefix_sum_arr = new int[max_value];
    prefix_sum_arr[0] = frequency_arr[0];
    for (int i = 1; i < max_value + 1; i++) {
        prefix_sum_arr[i] = prefix_sum_arr[i - 1] + frequency_arr[i];
    }
    delete[] frequency_arr;
    
    return prefix_sum_arr;
}
