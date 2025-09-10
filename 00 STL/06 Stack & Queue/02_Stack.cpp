
// Problem link ===>> https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?t=ITP2_2_A
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

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n, q;
    cin >> n >> q;

    stack<int> st[n];
    for (int i = 0; i < q; i++)
    {
        int tp;
        cin >> tp;
        if (tp == 0)
        {
            int t, x;
            cin >> t >> x;
            st[t].push(x);
        }
        else if (tp == 1)
        {
            int t;
            cin >> t;
            if (st[t].empty())
                cout << -1 << endl;
            else
            {
                cout << st[t].top() << endl;
            }
        }
        else
        {
            int t;
            cin >> t;
            if (!st[t].empty())
                st[t].pop();
        }
    }

    return 0;
}