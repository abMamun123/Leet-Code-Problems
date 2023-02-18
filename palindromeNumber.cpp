/**
 *author:xyz_123
 *created:09-02-2023(18:12:02)
 **/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(int x)
{
    deque<int> de;
    while (x != 0)
    {
        int d = x % 10;
        de.push_back(d);
        x = x / 10;
    }
    while (!de.empty())
    {
        if (de.front() != de.back())
            return false;
        else
            return true;
    }
};
int main()
{
    int x;
    cin >> x;
    cout<<isPalindrome(x);
    return 0;
}