#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> myStack;

void retCommand(string command);

int main()
{
    int num;
    cin >> num;
    string command;
    for (int i = 0; i < num; i++)
    {
        cin >> command;
        retCommand(command);
    }

    return 0;
}

void retCommand(string command)
{
    if (command == "push")
    {
        int commandArg;
        cin >> commandArg;
        myStack.push(commandArg);
    }
    else if (command == "top")
    {
        if(myStack.size())
        {
            cout << myStack.top() << endl;
            return;
        }
        cout << -1 << endl;
    }
    else if (command == "pop")
    {
        if(myStack.empty()) 
        {
            cout << -1 << endl;
            return;
        }
        cout << myStack.top() << endl;
        myStack.pop();
    }
    else if (command == "empty")
    {
        cout << myStack.empty() << endl;
    }
    else 
    {
        cout << myStack.size() << endl;
    }
}
