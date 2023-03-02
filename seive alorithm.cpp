/**
 *author:Abu Jafar Shiddik
 *created:02-03-2023(08:57:41)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,count=0;
    cin >> n;
    vector<int> primes;
    vector<bool> visited(n);
    for (int i = 2; i < n; i++)
    {
        if (visited[i] == false)
        {
            count++;
            primes.push_back(i);
            for (int x = 2; i * x < n; x++)
            {
                visited[i * x] = true;
            }
        }
    }
    for (int i = 0; i < primes.size(); i++)
    {
        cout<<primes[i]<<" ";
    }
    cout<<"\n";
    cout<<count;
    return 0;
}