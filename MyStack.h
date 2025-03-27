#ifndef MYSTACK_H
#define MYSTACK_H

#include <iostream>
#include <stdexcept>  // For exceptions

template <typename T>
class MyStack {
private:

    struct MyListNode {
        T value;
        MyListNode* next;

        MyListNode(T val) : value(val), next(nullptr) {}
    };

    MyListNode* head;

public:
    MyStack();  // Constructor
    ~MyStack(); // Destructor

    bool empty() const;
    T top() const;
    void pop();
    void push(T value);
};

#include "MyStack.tpp"

#endif // MYSTACK_H
