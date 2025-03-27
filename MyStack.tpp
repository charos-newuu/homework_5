#include "MyStack.h"

// Constructor
template <typename T>
MyStack<T>::MyStack() : head(nullptr) {}

// Destructor: Delete all nodes
template <typename T>
MyStack<T>::~MyStack() {
    while (!empty()) {
        pop();
    }
}

// Check if stack is empty
template <typename T>
bool MyStack<T>::empty() const {
    return head == nullptr;
}

// Get top element without removing it
template <typename T>
T MyStack<T>::top() const {
    if (empty()) {
        throw std::logic_error("Stack is empty");
    }
    return head->value;
}

// Remove top element
template <typename T>
void MyStack<T>::pop() {
    if (empty()) {
        throw std::logic_error("Stack is empty");
    }
    MyListNode* temp = head;
    head = head->next;
    delete temp;  // Free memory
}

// Push new element onto stack
template <typename T>
void MyStack<T>::push(T value) {
    MyListNode* newNode = new MyListNode(value);
    newNode->next = head;
    head = newNode;
}
