/**
 *author:Abu Jafar Shiddik
 *created:24-02-2023(15:09:20)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    deque<int> dq;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        dq.push_back(x);
    }
    vector<int> ans;
    deque<int> dq1;
    for (int i = 0; i < n; i++)
    {

        if (dq.front() < dq.back())
        {
            ans.push_back(dq.front());
            dq.pop_front();
        }
        else
        {
            ans.push_back(dq.back());
            dq.pop_back();
        }
    }

    for (int i = 0; i < ans.size(); i++)
        cout << ans[i] << " ";

    return 0;
}