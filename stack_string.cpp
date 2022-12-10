
#include <iostream>
#include <stack>
using namespace std;

int main()
{
    // creation of stack
    stack<string> s;

    // add element by using push operation
    s.push(piyush);
    s.push(bhatia);

    // remove the element by using pop operation
    s.pop();

    if (s.empty())
    {
        cout << " stack is empty " << endl;
    }
    else
    {
        cout << " stack is not empty " << endl;
    }

    cout << " Printing the stack " << s.top() << endl;

    return 0;
}
