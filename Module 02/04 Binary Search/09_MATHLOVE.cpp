
// Problem link ===>> https://www.spoj.com/problems/MATHLOVE/
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

int isOk(ll id, ll y)
{
    if (id * (id + 1) / 2 < y)
        return 0;
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        ll y;
        cin >> y;
        ll l = 0, r = y;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (isOk(mid, y) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        if (l * (l + 1) / 2 == y)
            cout << l << endl;
        else
            cout << "NAI" << endl;
    }
    return 0;
}