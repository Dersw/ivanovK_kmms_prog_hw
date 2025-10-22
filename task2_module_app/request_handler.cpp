#include "request_handler.hpp"
#include <algorithm>
#include <iostream>

void drw::handle_requests(int*& arr, const int arr_size, const int requests_amount, const int max_val) {
    int* frequency_arr = new int[max_val + 1];
    for (int i = 0; i < arr_size ; i++) {
        frequency_arr[arr[i]] += 1;
    }
    int* prefix_sum_arr = new int[max_val + 1];
    prefix_sum_arr[0] = frequency_arr[0];
    for (int i = 1; i <= max_val + 1; i++) {
        prefix_sum_arr[i] = prefix_sum_arr[i - 1] + frequency_arr[i];
    }
    delete[] frequency_arr;
    
    int left_pointer;
    int right_pointer;
    for (int i = 0; i < requests_amount; i++) {
        std::cout << std::endl << "Запрос № " << i + 1 << " : " << std::endl;
        std::cout << "Введите левую границу поиска: " << std::endl;
        std::cin >> left_pointer;
        std::cout << "Введите правую границу поиска: " << std::endl;
        std::cin >> right_pointer;
        
        int left_border = std::min(max_val, std::max(left_pointer, 0));
        int right_border = std::max(0, std::min(max_val, right_pointer));
        int final_value = prefix_sum_arr[right_border] - prefix_sum_arr[left_border];
        if (final_value % 10 == 1) {
            std::cout << "В области между правой и левой границей находится "
                      << final_value << " элемент" << std::endl;
        }
        if (1 < final_value % 10 && final_value % 10 < 5) {
            std::cout << "В области между правой и левой границей находятся "
                      << final_value << " элемента" << std::endl;
        }
        if (5 <= final_value % 10 || final_value % 10 == 0) {
            std::cout << "В области между правой и левой границей находятся "
                      << final_value << " элементов" << std::endl;
        }
    }
    delete[] prefix_sum_arr;
}
