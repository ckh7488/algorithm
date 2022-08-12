#include <iostream>
#include <stack>

using namespace std;

int main()
{
    stack<double> myStack;
    int N;
    string formula;
    cin >> N >> formula;
    double varArr[N];
    double ans;
    for (int i = 0; i < N; i++)
    {
        cin >> varArr[i];
    }
    for (auto c : formula)
    {
        if ('A' <= c && c <= 'Z')
        {
            myStack.push(varArr[c - 65]);
        }
        else
        {
            double tmpA = myStack.top();
            myStack.pop();
            double tmpB = myStack.top();
            myStack.pop();
            switch (c)
            {
            case '+':
                myStack.push(tmpB + tmpA);
                break;
            case '-':
                myStack.push(tmpB - tmpA);
                break;
            case '*':
                myStack.push(tmpB * tmpA);
                break;
            case '/':
                myStack.push(tmpB / tmpA);
                break;
            }
            // cout << tmpB << c << tmpA << '=' << myStack.top() << endl;
        }
    }
    cout << fixed;
    cout.precision(2);
    cout << myStack.top();
}