/**
 *author:xyz_123
 *created:09-02-2023(20:57:27)
 **/
#include <bits/stdc++.h>
using namespace std;
bool isValid(string s)
{
    stack<char> a;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' || s[i] == '{' || s[i] == '[')
        {
            a.push(s[i]);
        }
        else
        {
            cout << "top = " << a.top() << "\n";
            cout << "s[i] = "<< s[i] << "\n";
            if (a.empty())
            {
                return 0;
            }
            else if (a.top() == '(' and s[i] == ')')
                a.pop();
            else if (a.top() == '{' and s[i] == '}')
                a.pop();
            else if (a.top() == '[' and s[i] == ']')
                a.pop();
            else
                a.push(s[i]);
        }
    }
    if (a.empty())
    {
        return true;
    }
    else
        return false;
};
int main()
{
    string str;
    cin >> str;
    cout << isValid(str);
    return 0;
}