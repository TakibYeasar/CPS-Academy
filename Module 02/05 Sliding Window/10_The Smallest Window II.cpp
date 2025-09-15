
// Problem link ===>> https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=DSL_3_B
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

    ll n, k;
    cin >> n >> k;

    queue<ll> q;
    for (ll i = 0; i < n; i++)
    {
        ll v;
        cin >> v;
        q.push(v);
    }

    vector<ll> cnt(k + 1, 0);
    queue<ll> window;
    ll present_cnt = 0;

    while (!q.empty())
    {
        ll v = q.front();
        q.pop();

        window.push(v);

        if (v <= k)
        {
            cnt[v]++;
            if (cnt[v] == 1)
                present_cnt++;
        }

        if (present_cnt == k)
            break;
    }

    ll ans = INT_MAX;

    while (1)
    {
        if (present_cnt == k)
        {
            ans = min(ans, (ll)window.size());
            ll front = window.front();
            window.pop();

            if (front <= k)
            {
                cnt[front]--;
                if (cnt[front] == 0)
                    present_cnt--;

                while (!q.empty())
                {
                    ll v = q.front();
                    q.pop();

                    window.push(v);

                    if (v <= k)
                    {
                        cnt[v]++;
                        if (cnt[v] == 1)
                            present_cnt++;
                    }

                    if (present_cnt == k)
                        break;
                }
            }
        }
        else
        {
            break;
        }
    }

    cout<< (ans == INT_MAX ? 0 : ans) << endl;

    return 0;
}