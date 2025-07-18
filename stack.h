#ifndef STACK_H
#define STACK_H

#include <iostream>
using namespace std;

// Define a Node for the linked list
struct Node 
{
    int data;
    Node* next;
};

// Define the Stack structure
struct Stack 
{
    Node* top;
};

// Stack function declarations
void initialize(Stack &s);
bool isEmpty(Stack &s);
void push(Stack &s, int value);
void pop(Stack &s);
int peek(Stack &s);
void display(Stack &s);
void clear(Stack &s); // to free memory

// Function definitions

void initialize(Stack &s) 
{
    s.top = nullptr;
}

bool isEmpty(Stack &s) 
{
    return s.top == nullptr;
}

void push(Stack &s, int value) 
{
    Node* newNode = new Node;
    newNode->data = value;
    newNode->next = s.top;
    s.top = newNode;
}

void pop(Stack &s) 
{
    if (isEmpty(s)) {
        cout << "Stack Underflow\n";
        return;
    }
    Node* temp = s.top;
    s.top = s.top->next;
    delete temp;
}

int peek(Stack &s) 
{
    if (isEmpty(s)) 
    {
        cout << "Stack is empty\n";
        return -1;
    }
    return s.top->data;
}

void display(Stack &s) 
{
    if (isEmpty(s)) 
    {
        cout << "Stack is empty\n";
        return;
    }
    cout << "Stack elements: ";
    Node* temp = s.top;
    while (temp != nullptr) 
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << "\n";
}

void clear(Stack &s) 
{
    while (!isEmpty(s)) 
    {
        pop(s);
    }
}

#endif
