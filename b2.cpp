#include<iostream>
using namespace std;

// Function to traverse an array
void traverseArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Example array
    int myArray[] = {1, 2, 3, 4, 5};

    // Calculate the size of the array
    int size = sizeof(myArray) / sizeof(myArray[0]);

    // Call the function to traverse the array
    traverseArray(myArray, size);

    return 0;
}
