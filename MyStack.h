#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <stdexcept>  // For exceptions

template <typename T>
class MyStack {
private:
    // Node structure for the linked list
    struct MyListNode {
        T value;
        MyListNode* next;

        MyListNode(T val) : value(val), next(nullptr) {}  // Constructor
    };

    MyListNode* head;  // Pointer to the top of the stack

public:
    MyStack();  // Constructor
    ~MyStack(); // Destructor

    bool empty() const;  // Check if stack is empty
    T top() const;       // Get top element
    void pop();          // Remove top element
    void push(T value);  // Add element to the stack
};

#include "MyStack.tpp"  // Include the template implementation file

#endif // MYSTACK_H
