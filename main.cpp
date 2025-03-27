#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> stack;  // Create a stack of integers

    // Push elements
    stack.push(10);
    stack.push(20);
    stack.push(30);

    // Display top element
    std::cout << "Top element: " << stack.top() << std::endl;

    // Pop elements
    stack.pop();
    std::cout << "Top after pop: " << stack.top() << std::endl;

    stack.pop();
    stack.pop();

    // Try popping an empty stack (should throw an error)
    try {
        stack.pop();
    } catch (const std::logic_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
