#include <bits/stdc++.h>
using namespace std;
void check_parentheses(string st, int N)
{
    bool ans = true;
    stack<char> s;
    for (int i = 0; i < N; i++)
        // push if opening bracket
        if (st[i] == '(' || st[i] == '[' || st[i] == '{')
            s.push(st[i]);
        else
        {
            if (!s.empty())
            {
                // check if top of stack is pair of current
                // element
                char temp = s.top();
                s.pop();
                if (st[i] == ')' && temp != '(')
                {
                    ans = false;
                    break;
                }
                if (st[i] == ']' && temp != '[')
                {
                    ans = false;
                    break;
                }
                if (st[i] == '}' && temp != '{')
                {
                    ans = false;
                    break;
                }
            }
            // if stack is empty, not balanced
            else
            {
                ans = false;
                break;
            }
        }

    if (!s.empty())
        ans = false;

    if (ans)
        cout << "Balanced";
    else
        cout << "Not Balanced";
}
int main()
{
    string s = "({})[]";
    int N = s.length();

    check_parentheses(s, N);
}
