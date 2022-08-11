#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main()
{
    stack<char> myStack;
    string formula;

    getline(cin, formula);

    for (int i=0; i<formula.size(); i++)
    {
        char c = formula[i];
        if (c == '*' || c == '/')
        {
            while (!myStack.empty() && (myStack.top() == '*' || myStack.top() == '/'))
            {
                cout << myStack.top();
                myStack.pop();
            }
            myStack.push(c);
        }
        else if (c == '(')
        {
            myStack.push(c);
        }
        else if (c == '+' || c == '-')
        {
            while (!myStack.empty() && myStack.top() != '(')
            {
                cout << myStack.top();
                myStack.pop();
            }
            myStack.push(c);
        }
        else if (c == ')')
        {
            while (myStack.top() != '(')
            {
                cout << myStack.top();
                myStack.pop();
            }
            myStack.pop();
        }
        else
        {
            cout << c;
        }
    }
    while(!myStack.empty())
    {
        cout << myStack.top();
        myStack.pop();
    }

    return 0;
}
