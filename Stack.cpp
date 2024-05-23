#include "Stack.h"
#include <iostream>
#include <stdexcept>

Stack::Stack(int size) {
    arr = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    delete[] arr;
}

void Stack::push(int x) {
    if (isFull()) {
        throw std::overflow_error("Stack Overflow");
    }
    arr[++top] = x;
}

int Stack::pop() {
    if (isEmpty()) {
        throw std::underflow_error("Stack Underflow");
    }
    return arr[top--];
}

int Stack::peek() const {
    if (isEmpty()) {
        throw std::underflow_error("Stack is empty");
    }
    return arr[top];
}

bool Stack::isEmpty() const {
    return top == -1;
}

bool Stack::isFull() const {
    return top == capacity - 1;
}

int Stack::size() const {
    return top + 1;
}
