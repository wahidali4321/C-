#include <iostream>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Return the index where the key is found
        }
    }
    return -1; // Return -1 if the key is not found in the array
}


int main() {
    const int size = 10;
    int arr[size] = {1, 3, 5, 7, 9, 2, 4, 6, 8, 10};

    std::cout << "Enter the element to search: ";
    int key;
    std::cin >> key;

    int result = linearSearch(arr, size, key);

    if (result != -1) {
        std::cout << "Element found at index " << result << std::endl;
    } else {
        std::cout << "Element not found in the array." << std::endl;
    }

    return 0;
}

