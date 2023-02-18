/**
 *author:xyz_123
 *created:09-02-2023(18:12:02)
 **/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    if (x < 0)
        return false;
    stack<int> st;
    int y = x;
    while (y != 0)
    {
        st.push(y % 10);
        y = y / 10;
    }

    while (!st.empty())
    {
        int n = x % 10;
        int m = st.top();
        if (m != n)
            return false;
        n = n / 10;
        st.pop();
    }
    return true;
};
int main()
{
    int x;
    cin >> x;
    cout << isPalindrome(x);
    return 0;
}