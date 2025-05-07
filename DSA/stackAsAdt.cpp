#include<iostream>
#include<cstdlib>
#define size 5
using namespace std;
class Stack
{
        private:
        int top;
        int stack[size];
        public:
        Stack()
        {
            top = -1;
        }
        bool isFull()
        {
            return top == size-1;
        }
        bool isEmpty()
        {
            return top == -1;
        }
        void push()
        {
            int data;
            if(isFull())
            {
                cout<<"Stack Overflow!"<<endl;
                return;
            }
            cout<<"Enter the data to be inserted: "<<endl;
            cin>>data;
            top++;
            stack[top] = data;
        }
        void pop()
        {
            int del_item;
            if(isEmpty())
            {
                cout<<"Stack is Empty!"<<endl;
                return;
            }
            del_item = stack[top];
            top--;
            cout<<del_item<<" is popped out"<<endl;
        }
        void find_top()
        {
            if(isEmpty())
            {
                cout<<"Stack is empty!"<<endl;
                return;
            }
            cout<<"top = "<<top<<endl;
            cout<<"top data = "<<stack[top]<<endl;
        }
        void display()
        {
            int i;
            if(isEmpty())
            {
                cout<<"Stack is empty!"<<endl;
                return;
            }
            cout<<"Stack elements are: "<<endl;
            for(i=top; i>=0; i--)
            {
                cout<<stack[i]<<endl;
            }
        }
};
int main()
{
    Stack S;
    int choice;
    while(true)
    {
        cout<<"Menu:"<<endl;
        cout<<"1.push\n2.pop\n3.find_top\n4.display\n5.exit"<<endl;
        cout<<"Enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
            case 1:S.push();
            break;
            case 2:S.pop();
            break;
            case 3:S.find_top();
            break;
            case 4:S.display();
            break;
            case 5:exit(0);
            default:cout<<"Invalid choice! try again."<<endl;
        }
    }
    return 0;
}

