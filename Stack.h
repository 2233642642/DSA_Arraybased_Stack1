#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED


class Stack {
private:
    int *arr;
    int top;
    int capacity;

public:
    Stack(int size = 10);        // Constructor to initialize stack
    ~Stack();                    // Destructor to clean up memory

    void push(int x);            // Function to add an element to the stack
    int pop();                   // Function to remove an element from the stack
    int peek() const;            // Function to return the top element of the stack
    bool isEmpty() const;        // Function to check if the stack is empty
    bool isFull() const;         // Function to check if the stack is full
    int size() const;            // Function to return the size of the stack
};



#endif // STACK_H_INCLUDED
