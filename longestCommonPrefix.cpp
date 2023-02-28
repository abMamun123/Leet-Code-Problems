/**
 *author:Abu Jafar Shiddik
 *created:28-02-2023(21:08:35)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<string> strs = {"flower", "flow", "flight"};
    int n = strs.size();
    if (n == 0)
        return -1;
    sort(begin(strs), end(strs));
    string a = strs[0];
    string b = strs[n - 1];
    string ans = "";
    for (int i = 0; i < a.size(); i++)
    {
        if (a[i] == b[i])
            ans += a[i];
        else
            break;
    }
    cout << ans;
    return 0;
}