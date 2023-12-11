#include <iostream>

void sortArray(int* arr, int size) {
    for (int i = 0; i < size - 1; ++i) {
        for (int j = 0; j < size - i - 1; ++j) {
            if (arr[j] > arr[j + 1]) {
                // ½»»»ÔªËØ
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}


int main() {
    int size;
    std::cout << "Enter the number of elements in the array: ";
    std::cin >> size;

    int* dynamicArray = new int[size];

    std::cout << "Enter the elements of the array:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cin >> dynamicArray[i];
    }

    sortArray(dynamicArray, size);

    std::cout << "Sorted array elements using pointers:" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << *(dynamicArray + i) << " ";
    }
    std::cout << std::endl;

    delete[] dynamicArray;

    return 0;
}