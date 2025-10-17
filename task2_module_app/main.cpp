#include "generator.hpp"
#include "io.hpp"
#include "prefix_sum.hpp"
#include "request_handler.hpp"
#include "iostream"

int main() {
    int arr_len;
    const int max_val = 199;
    std::cout << "Введите желаемую длину массива: " << std::endl;
    std::cin >> arr_len;
    int* arr = biv::generate_arr(arr_len);
    biv::print_array("Cгенерированный массив: ", arr, arr_len);
    int* prefix_sum_arr = biv::calc_prefix_sum(arr, arr_len, max_val);
    delete[] arr;
    
    int requests_amount;
    std::cout << std::endl << "Введите желаемое количество запросов: " << std::endl;
    std::cin >> requests_amount;
    biv::handle_requests(prefix_sum_arr, requests_amount, max_val);
    
    delete[] prefix_sum_arr;

    return 0;
}
