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

    int n, k;
    cin >> n >> k;
    vector<int> x(n + 1);
    for (int i = 0; i <= n; i++)
    {
        cin >> x[i];
    }

    // // Bruteforce
    // for (int i = 1; i <= n - k + 1; i++)
    // {
    //     int mn = INT_MAX;
    //     int mx = INT_MIN;

    //     for (int j = i; j < i + k; j++)
    //     {
    //         mn = min(mn, x[j]);
    //         mx = max(mx, x[j]);
    //     }

    //     cout << mn << " " << mx << endl;
    // }

    multiset<int> ms;
    for (int i = 1; i <= k; i++)
    {
        ms.insert(x[i]);
    }

    for (int i = 0; i <= n - k + 1; i++)
    {
        int mn = *ms.begin();
        int mx = *ms.rbegin();

        cout << mn << " " << mx << endl;

        ms.erase(ms.find(x[i]));
        if (i + k <= n)
        {
            ms.insert(x[i + k]);
        }
    }

    return 0;
}