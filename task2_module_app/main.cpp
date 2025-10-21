#include <iostream>

#include "generator.hpp"
#include "io.hpp"
#include "prefix_sum.hpp"
#include "request_handler.hpp"

int main() {
    int arr_len;
    const int max_val = 199;
    std::cout << "Введите желаемую длину массива: " << std::endl;
    std::cin >> arr_len;
    int* arr = drw::generate_arr(arr_len);
    drw::print_array("Cгенерированный массив: ", arr, arr_len);
    
    int requests_amount;
    std::cout << std::endl << "Введите желаемое количество запросов: " << std::endl;
    std::cin >> requests_amount;
    drw::handle_requests(arr, arr_len, requests_amount, max_val);
    delete[] arr;

    return 0;
}
