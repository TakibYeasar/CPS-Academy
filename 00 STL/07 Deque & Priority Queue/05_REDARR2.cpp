
// Problem link ===>> https://www.spoj.com/problems/REDARR2/
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

    ll tc;
    cin >> tc;
    while (tc--)
    {
        ll n;
        cin >> n;
        
        priority_queue<ll, vector<ll>, greater<ll>> pq;
        while(n--)
        {
            ll x;
            cin >> x;
            pq.push(x);
        }
        ll cost = 0;
        while(pq.size() > 1)
        {
            ll a = pq.top();
            pq.pop();
            ll b = pq.top();
            pq.pop();
            cost += (a + b);
            pq.push(a + b);
        }
        cout << cost << endl;
    }

    return 0;
}