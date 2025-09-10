
// Problem link ===>> https://www.geeksforgeeks.org/problems/deque-implementations/1
// submission link ===>>

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

void push_back_pb(deque<int> &dq, int x)
{
    dq.push_back(x);
}

void pop_back_pb(deque<int> &dq)
{
    if (!dq.empty())
        dq.pop_back();
}

int front_dq(deque<int> &dq)
{
    if (!dq.empty())
        return dq.front();
    return -1; // or some error value
}

void push_front_pb(deque<int> &dq, int x)
{
    dq.push_front(x);
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    
    return 0;
}