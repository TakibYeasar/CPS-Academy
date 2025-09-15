
// Problem link ===>> https://cses.fi/problemset/task/1642/
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

    ll n, x;
    cin >> n >> x;

    int arr[n + 1];
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }

    map<ll, pair<int, int>> mp;
    mp[arr[1] + arr[2]] = {1, 2};

    for (int k = 3; k < n; k++)
    {
        for (int l = k + 1; l <= n; l++)
        {
            ll sum = arr[k] + arr[l];
            ll rem = x - sum;

            if (mp.count(rem))
            {
                cout << mp[rem].first << " " << mp[rem].second << " " << k << " " << l << endl;
                return 0;
            }
        }
        for (int i = 1; i < k; i++)
        {
            mp[arr[i] + arr[k]] = {i, k};
        }
    }
    cout << "IMPOSIBBLE\n";
    
    return 0;
}