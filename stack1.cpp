#include <iostream>
using namespace std;

class Stack
{
    // properties
public:
    int top;
    int *arr;
    int size;
    // behaviour

    // constructor
    Stack(int size)
    {
        this->size = size;
        top = -1;
        arr = new int[size];
    }

    // insert

    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << " Stack  overflow " << endl;
        }
    }

    // remove

    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << " Stack underflow " << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }

        else
        {
            cout << " stack is empty " << endl;
            return -1;
        }
    }

    bool isEmpty()
    {

        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    void print (){
        for ( int i = 0 ; i < 5 ; i++){
            cout<<*(arr+i)<<"  ";
        }
    }
};

int main()
{
    Stack st(5);

    st.push(22);
    st.push(40);
    st.push(43);
    st.push(20);
    st.push(50);
    st.push(70);

    // cout << st.peek() << endl;

    // st.pop();
    // cout << st.peek() << endl;

    // st.pop();
    // cout << st.peek() << endl;

    // st.pop();
    // cout << st.peek() << endl;

    // if (st.isEmpty())
    // {
    //     cout << " Stack is Empty mere dost " << endl;
    // }
    // else
    // {
    //     cout << " Stack is Not Empty mere dost " << endl;
    // }

    st.print();

    return 0;
}