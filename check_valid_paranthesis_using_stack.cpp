/**
 *author:Abu Jafar Shiddik
 *created:24-02-2023(11:45:34)
 **/
#include <bits/stdc++.h>
using namespace std;
void valid_paranthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] == '(' or s[i] == '{' or s[i] == '[')
        {
            st.push(s[i]);
        }
        else
        {
            if (st.empty())
                return;
            if (st.top() == '(' and s[i] == ')')
                st.pop();
            else if (st.top() == '{' and s[i] == '}')
                st.pop();
            else if (st.top() == '[' and s[i] == ']')
                st.pop();
            else
                st.push(s[i]);
        }
    }
    if (st.empty())
        cout << "YES\n";
    else
        cout << "NO\n";
}
int main()
{
    string s;
    cin >> s;
    valid_paranthesis(s);
    return 0;
}
