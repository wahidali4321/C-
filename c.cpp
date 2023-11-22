#include<iostream>
using namespace std;

int main() {
    // Step 2: Input Array
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int arr[100]; // Assuming a maximum size of 100
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; ++i) {
        cin >> arr[i];
    }

    // Step 3: Display Original Array
    cout << "Original Array: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 4: Insert at the Beginning
    int newElementBegin;
    cout << "Enter a new element to insert at the beginning: ";
    cin >> newElementBegin;

    for (int i = size; i > 0; --i) {
        arr[i] = arr[i - 1];
    }
    arr[0] = newElementBegin;
    size++;

    // Step 5: Display Array after Insertion at the Beginning
    cout << "Array after insertion at the beginning: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 6: Insert at the End
    int newElementEnd;
    cout << "Enter a new element to insert at the end: ";
    cin >> newElementEnd;

    arr[size] = newElementEnd;
    size++;

    // Step 7: Display Array after Insertion at the End
    cout << "Array after insertion at the end: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 8: Insert at a Specified Location
    int newElement, index;
    cout << "Enter a new element to insert: ";
    cin >> newElement;
    cout << "Enter the index where the element is to be inserted: ";
    cin >> index;

    if (index >= 0 && index <= size) {
        for (int i = size; i > index; --i) {
            arr[i] = arr[i - 1];
        }
        arr[index] = newElement;
        size++;
    } else {
        cout << "Invalid index. Element not inserted." << endl;
    }

    // Step 9: Display Array after Insertion at Specified Location
    cout << "Array after insertion at the specified location: ";
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;

    // Step 10: End
    return 0;
}
