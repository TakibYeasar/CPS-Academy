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

    int n;
    cin >> n;
    vector<int> x(n + 1);
    for (int i = 0; i <= n; i++)
    {
        cin >> x[i];
    }

    map<int, int> mp;
    deque<int> dq;
    for (int i = 0; i <= n; i++)
    {
        if (mp[x[i]] == 1)
        {
            while (1)
            {
                int v = dq.front();
                dq.pop_front();
                mp[v] = 0;

                if (v == x[i])
                {
                    break;
                }
            }
        }

        dq.push_back(x[i]);
        mp[x[i]] = 1;
        cout << dq.size() << endl;
    }

    return 0;
}
