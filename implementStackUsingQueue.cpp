/**
 *author:Abu Jafar Shiddik
 *created:01-03-2023(02:11:26)
 **/
#include <bits/stdc++.h>
using namespace std;
class Stack
{
    queue<int> q, q1;

public:
    Stack()
    {
    }

    void push(int x)
    {
        q.push(x);
    }

    int pop()
    {
        int i = 0;
        while (i < q.size() - 1)
        {
            q1.push(q.front());
            q.pop();
        }
        int x = q.front();
        q.pop();
        while (!q1.empty())
        {
            q.push(q1.front());
            q1.pop();
        }
        return x;
    }

    int top()
    {
        return q.back();
    }

    bool empty()
    {
        if (q.empty())
            return true;
        return false;
    }
};
int main()
{
    Stack st;
    st.push(50);
    cout << st.top();
    return 0;
}