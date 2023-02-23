/**
 *author:Abu Jafar Shiddik
 *created:22-02-2023(19:32:59)
 **/
#include <bits/stdc++.h>
using namespace std;
bool isPalindrome(string str)
{

    string p = "";
    for (int i = 0; i < str.size(); i++)
    {
        if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z') || str[i] >= '0' && str[i] <= '9')
        {
            p += tolower(str[i]);
        }
    }
    int start = 0;
    int end = p.size()-1;
    cout<<p<<endl;
    while (start <= end)
    {
        cout<<p[start]<<" "<<p[end]<<endl;
        if (p[start] != p[end])
        {
            return false;
        }
        start++;
        end--;
    }
    return true;
};
int main()
{
    string str;
    getline(cin, str);
    cout<<isPalindrome(str);
    return 0;
}
