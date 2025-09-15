
// Problem link ===>> https://cses.fi/problemset/task/2428
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
        ll x;
        cin >> x;
        q.push(x);
    }

    queue<ll> window;
    map<ll, ll> freq;
    ll distinctCount = 0;

    while (!q.empty())
    {
        ll v = q.front();
        q.pop();
        window.push(v);
        freq[v]++;

        if (freq.size() > k)
        {
            while (freq.size() > k)
            {
                ll front = window.front();
                window.pop();
                freq[front]--;
                if (freq[front] == 0)
                {
                    freq.erase(front);
                }
            }
        }

        distinctCount += freq.size();
    }
    cout << distinctCount << endl;

    return 0;
}