/**
 *author:xyz_123
 *created:08-02-2023(23:15:21)
 **/
#include <bits/stdc++.h>
using namespace std;
vector<int> twoSum(vector<int> &nums, int k)
{
    vector<pair<int, int>> v;
    vector<int> v2;
    pair<int, int> p;
    for (int i = 0; i < nums.size(); i++)
    {
        p.first = nums[i];
        p.second = i;
        v.push_back(p);
    }
    auto it1 = v.begin();
    auto it2 = v.end();
    sort(it1, it2);
    it2--;
    while (it1 < it2)
    {
        int sum = it1->first + it2->first;
        if (sum == k)
        {
            v2.push_back(it1->second);
            v2.push_back(it2->second);
            return v2;
        }
        else if (sum < k)
        {
            it1++;
        }
        else
            it2--;
    }
    return v2;
};
int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    vector<int> v1 = twoSum(v, k);
    auto it = v1.begin();
    while (it != v1.end())
    {
        cout << *it<<" ";
        it++;
    }

    return 0;
}

