/**
 *author:Abu Jafar Shiddik
 *created:23-02-2023(12:56:48)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, m;
    cin >> n >> m;
    vector<int> a;
    vector<int> b;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
    }
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        b.push_back(x);
    }
    set<int> s;
    
    int i = 0, j = 0;
    while (m > i && n > j)
    {
        if(a[i]> b[j]){
            j++;
        }
        else if(a[i]< b[j]){
            i++;
        }
        else if(a[i] == b[j]){
            s.insert(a[i]);
            i++;
            j++;
        }
    }
    for (auto it : s)
        cout << it << " ";
    return 0;
}