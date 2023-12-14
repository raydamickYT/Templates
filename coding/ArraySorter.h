#include <algorithm>
#include <iostream>

template <typename T>
void sortArray(T* array, int size) {
    std::sort(array, array + size);
}

template <typename T>
void printArray(T* array, int size) {
    for (int i = 0; i < size; i++) {
        std::cout << array[i] << " ";
    }
    std::cout << std::endl;
}
