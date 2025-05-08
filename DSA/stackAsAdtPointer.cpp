#include<iostream>
#include<cstdlib>
#define size 5
using namespace std;
class Stack {
    private:
        int top;
        int* stack;
    public:
        Stack();
        ~Stack(); // Destructor to free memory
        void push();
        void pop();
        void find_top();
        void display();
};

// Constructor
Stack::Stack() {
    top = -1;
    stack = new int[size]; // Dynamically allocate memory for stack
    if(stack == nullptr) {
        cout << "Memory allocation failed!" << endl;
        exit(1); // Exit if memory allocation fails
    }
}

// Destructor
Stack::~Stack() {
    delete[] stack;  // Free the dynamically allocated memory
}

void Stack::push() {
    if(top == size - 1) {
        cout << "Stack Overflow!" << endl;
        return;
    }
    int data;
    cout << "Enter the data to be inserted: " << endl;
    cin >> data;
    top++;
    stack[top] = data;
}

void Stack::pop() {
    if(top == -1) {
        cout << "Stack is Empty!" << endl;
        return;
    }
    int del_item = stack[top];
    top--;
    cout << del_item << " is popped out" << endl;
}

void Stack::find_top() {
    if(top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "top = " << top << endl;
    cout << "top data = " << stack[top] << endl;
}

void Stack::display() {
    if(top == -1) {
        cout << "Stack is empty!" << endl;
        return;
    }
    cout << "Stack elements are: " << endl;
    for(int i = top; i >= 0; i--) {
        cout << stack[i] << endl;
    }
}

int main() {
    Stack* S = new Stack; // <-- Initialize the stack pointer
    int choice;
    while(true) {
        cout << "Menu:" << endl;
        cout << "1.push\n2.pop\n3.find_top\n4.display\n5.exit" << endl;
        cout << "Enter your choice" << endl;
        cin >> choice;
        switch(choice) {
            case 1:
                S->push();
                break;
            case 2:
                S->pop();
                break;
            case 3:
                S->find_top();
                break;
            case 4:
                S->display();
                break;
            case 5:
                delete S;
                exit(0);
            default:
                cout << "Invalid choice! try again." << endl;
        }
    }
    return 0;
}