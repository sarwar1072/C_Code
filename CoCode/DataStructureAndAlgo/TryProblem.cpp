#include <iostream>
#include <stack>
using namespace std;

bool isBalanced(string expression)
{
    stack<char> s;

    for (char c : expression)
    {
        if (c == '(' || c == '{' || c == '[')
        {
            s.push(c);
        }
        else if (c == ')' || c == '}' || c == ']')
        {
            if (s.empty() || s.top() != c)
            {
                return false;
            }
            s.pop();
        }
    }

    return s.empty();
}

int main()
{
    string expression;
    cout << "Enter an expression: ";
    cin >> expression;

    if (isBalanced(expression))
    {
        cout << "The expression is balanced." << endl;
    }
    else
    {
        cout << "The expression is not balanced." << endl;
    }

    return 0;
}
