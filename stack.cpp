// main.cpp
#include "stack.h"

int main() {
    Stack s;
    initialize(s);

    push(s, 10);
    push(s, 20);
    push(s, 30);

    display(s);

    cout << "Top element: " << peek(s) << "\n";

    pop(s);
    display(s);

    clear(s); // Free allocated memory

    return 0;
}
