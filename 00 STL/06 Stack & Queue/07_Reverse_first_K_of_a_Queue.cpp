
// Problem link ===>> https://www.geeksforgeeks.org/problems/reverse-first-k-elements-of-queue/1
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

class Solution
{
public:
    queue<int> modifyQueue(queue<int> q, int k)
    {
        stack<int> st;
        for (int i = 0; i < k; i++)
        {
            st.push(q.front());
            q.pop();
        }
        while (!st.empty())
        {
            q.push(st.top());
            st.pop();
        }
        int t = q.size() - k;
        while (t--)
        {
            q.push(q.front());
            q.pop();
        }
        return q;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    return 0;
}