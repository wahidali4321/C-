#include <iostream>
using namespace std;

const int maxSize = 5;

class Queue {
private:
    int queue[maxSize];
    int front, rear;

public:
    Queue() {
        front = rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (rear + 1) % maxSize == front;
    }

    bool enqueue(int value) {
        if (isFull()) {
            cout << "Queue is full. Cannot enqueue." << endl;
            return false;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % maxSize;
        }

        queue[rear] = value;
        cout << "Enqueued " << value << endl;

        return true;
    }
};

int main() {
    Queue myQueue;

    myQueue.enqueue(1);
    myQueue.enqueue(2);
    myQueue.enqueue(3);
    myQueue.enqueue(4);
    myQueue.enqueue(5);
    myQueue.enqueue(6);  // This will print "Queue is full. Cannot enqueue."

    return 0;
}
