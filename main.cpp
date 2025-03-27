#include <iostream>
#include "MyStack.h"

int main() {
    MyStack<int> stack;

    stack.push(10);
    stack.push(20);
    stack.push(30);

    std::cout << "Top element: " << stack.top() << std::endl;

    stack.pop();
    std::cout << "Top after pop: " << stack.top() << std::endl;

    stack.pop();
    stack.pop();
)
    try {
        stack.pop();
    } catch (const std::logic_error& e) {
        std::cerr << "Error: " << e.what() << std::endl;
    }

    return 0;
}
