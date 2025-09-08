
// Problem link ===>> https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ITP2_1_D
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

    vector<int> v[n];
    for (int i = 0; i < q; i++)
    {
        int tp;
        cin >> tp;

        if (tp == 0)
        {
            int t, x;
            cin >> t >> x;
            v[t].push_back(x);
        }
        else if (tp == 1)
        {
            int t;
            cin >> t;
            for (int j = 0; j < v[t].size(); j++)
            {
                cout << v[t][j];
                if (j != v[t].size() - 1)
                    cout << " ";
            }
            cout << endl;
        }
        else
        {
            int t;
            cin >> t;
            v[t].clear();
        }
    }

    return 0;
}