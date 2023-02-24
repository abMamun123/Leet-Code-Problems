/**
 *author:Abu Jafar Shiddik
 *created:23-02-2023(17:56:35)
 **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    // To store individual words
    string word;
    int count = 0;
    while (ss >> word)
    {
        cout << word << " ";
        count++;
    }
    for (int i = 0; i < count; i++) {
        if (max < count[str[i]]) {
            max = count[str[i]];
            result = str[i];
        }
    }

    cout<<"\n";
    cout<<count;
    return 0;
}