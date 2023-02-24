#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, m;

    cin >> n;
    set<int> s1;

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        s1.insert(x);
    }

    cin >> m;
    set<int> s2;

    for (int i = 0; i < m; i++)
    {
        int x;
        cin >> x;
        s2.insert(x);
    }
    set<int> s3;
    for (auto it : s1)
        s3.insert(it);
    for (auto it : s2)
        s3.insert(it);
    for (auto it : s3)
        cout << it << " ";
}
