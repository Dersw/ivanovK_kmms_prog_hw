#include <cmath>
#include <iostream>

int main()
{   
    const int arr_size = 10;
    double* arr = new double[arr_size];

    for (int i = 0; i < 10; i++) {
        std::cout << "Введите " << i + 1 << " элемент: " << std::endl;
        std::cin >> arr[i];
    }

    int i = 0;
    bool is_increasing = true;
    while (i < arr_size - 1) {
      if (arr[i + 1] < arr[i]) {
        is_increasing = false;
        break;
      }
      i++;
    }
    
    delete[] arr;

    if (is_increasing) {
        std::cout << "Последовательность возврастающая" << std::endl;
    }
    else {
        std::cout << "Последовательность не возврастающая" << std::endl;
    }

    return 0;
}
