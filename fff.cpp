#include<iostream>
using namespace std;

// Declare the isfull function
bool isfull();

int main() {
    // Your main function code here

    return 0;
}

bool enqueue(int value) {
    // Check if the queue is full using the isfull function
    if (isfull())
        return false;

    // Assuming 'queue' and 'tail' are defined somewhere in your code
    queue[tail++] = value;

    return true;
}

bool isfull() {
    // Implement your logic to check if the queue is full
    // For example, compare 'tail' with the maximum size of the queue
    // Return true if it's full, false otherwise
}
