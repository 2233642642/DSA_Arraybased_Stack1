#include <iostream>
#include "Stack.h"

int main() {
    Stack stack(5);  // Create a stack of capacity 5

    try {
        stack.push(10);
        stack.push(20);
        stack.push(30);
        stack.push(40);
        stack.push(50);

        std::cout << "Top element is: " << stack.peek() << std::endl;
        std::cout << "Stack size is: " << stack.size() << std::endl;

        stack.pop();
        stack.pop();

        std::cout << "Top element after popping two elements: " << stack.peek() << std::endl;
        std::cout << "Stack size after popping two elements: " << stack.size() << std::endl;

        // Push another element to the stack
        stack.push(60);
        std::cout << "Top element after pushing one element: " << stack.peek() << std::endl;
        std::cout << "Stack size after pushing one element: " << stack.size() << std::endl;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
