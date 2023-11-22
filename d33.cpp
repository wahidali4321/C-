#include <iostream>

// Define the structure for a node in the linked list
struct Node {
    int data;
    Node* next;
};

// Function to insert a new node at the beginning of the linked list
void insertAtBeginning(Node*& head, int value) {
    // Create a new node
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = head;

    // Update the head to point to the new node
    head = newNode;
}

// Function to display the elements in the linked list
void displayList(Node* head) {
    while (head != nullptr) {
        std::cout << head->data << " ";
        head = head->next;
    }
    std::cout << std::endl;
}

// Function to free the memory allocated for the linked list
void deleteList(Node*& head) {
    while (head != nullptr) {
        Node* temp = head;
        head = head->next;
        delete temp;
    }
}

int main() {
    // Initialize an empty linked list
    Node* head = nullptr;

    // Insert elements at the beginning of the linked list
    insertAtBeginning(head, 3);
    insertAtBeginning(head, 7);
    insertAtBeginning(head, 1);
    insertAtBeginning(head, 9);

    // Display the linked list
    std::cout << "Linked List: ";
    displayList(head);

    // Free the memory allocated for the linked list
    deleteList(head);

    return 0;
}
