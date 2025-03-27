#include "MyStack.h"

template <typename T>
MyStack<T>::MyStack() : head(nullptr) {}

template <typename T>
MyStack<T>::~MyStack() {
    while (!empty()) {
        pop();
    }
}

template <typename T>
bool MyStack<T>::empty() const {
    return head == nullptr;
}

template <typename T>
T MyStack<T>::top() const {
    if (empty()) {
        throw std::logic_error("Stack is empty");
    }
    return head->value;
}


template <typename T>
void MyStack<T>::pop() {
    if (empty()) {
        throw std::logic_error("Stack is empty");
    }
    MyListNode* temp = head;
    head = head->next;
    delete temp;  // Free memory
}

template <typename T>
void MyStack<T>::push(T value) {
    MyListNode* newNode = new MyListNode(value);
    newNode->next = head;
    head = newNode;
}
