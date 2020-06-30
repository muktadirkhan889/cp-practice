/* https://www.geeksforgeeks.org/queue-using-stacks/ */
#include <bits/stdc++.h>
using namespace std;

// Enqueue costly
struct Queue
{
    stack<int> stk1, stk2;
    void enQueue(int x)
    {
        while (!stk1.empty())
        {
            stk2.push(stk1.top());
            stk1.pop();
        }
        stk1.push(x);
        while (!stk2.empty())
        {
            stk1.push(stk2.top());
            stk2.pop();
        }
    }
    int deQueue()
    {
        if (stk1.empty())
        {
            return -1;
        }
        int x = stk1.top();
        stk1.pop();
        return x;
    }
};

//Dequeue costly
struct Queue
{
    stack<int> stk1, stk2;
    void enQueue(int x)
    {
        stk1.push(x);
    }
    int deQueue()
    {
        if (stk1.empty() && stk2.empty())
        {
            return -1;
        }
        if (stk2.empty())
        {
            while (!stk1.empty())
            {
                stk2.push(stk1.top());
                stk1.pop();
            }
        }
        int x = stk2.top();
        stk2.pop();
        return x;
    }
};
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    Queue q;
    q.enQueue(1);
    q.enQueue(2);
    q.enQueue(3);

    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';
    cout << q.deQueue() << '\n';

    return 0;
}
