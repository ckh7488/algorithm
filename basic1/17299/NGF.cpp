#include <stack>
#include <vector>
#include <iostream>
#include <unordered_map>

using namespace std;

int main()
{
    string myString;
    vector<int> inputVec;
    unordered_map<int, int> umap;
    stack<int> myStack;

    getline(cin, myString); // myString[0] : size.
    int arrLen = stoi(myString);
    vector<int> outputVec(arrLen);

    for (auto i = 0; i < arrLen; i++)
    {
        int tmpval;
        cin >> tmpval;
        // umap[tmpval] = umap.find(tmpval) == umap.end() ? 1 : umap[tmpval] + 1;
        umap[tmpval]++;

        inputVec.push_back(tmpval);
    }

    for (auto i = 0; i < arrLen; i++)
    {
        int curNumCounts = umap[inputVec[i]];
        while (!myStack.empty() && umap[inputVec[myStack.top()]] < curNumCounts)
        {
            outputVec[myStack.top()] = inputVec[i];
            myStack.pop();
        }

        myStack.push(i);
    }

    while (!myStack.empty())
    {
        outputVec[myStack.top()] = -1;
        myStack.pop();
    }

    for (int i = 0; i < arrLen; i++)
    {
        cout << outputVec[i] << " ";
    }

    return 0;
}