#include "request_handler.hpp"
#include "algorithm"
#include "iostream"

void drw::handle_requests(int*& arr, const int requests_amount, const int max_val) {
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
        int final_value = arr[right_border] - arr[left_border];
        std::cout << "В области между правой и левой границей находятся " << final_value << " элемент(a/oв)" << std::endl;
    }
}
