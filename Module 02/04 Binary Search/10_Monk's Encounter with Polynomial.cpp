
// Problem link ===>> https://www.hackerearth.com/practice/algorithms/searching/binary-search/practice-problems/algorithm/monks-encounter-with-polynomial/
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

int arr[100] = {1, 2, 3, 4, 5};

ll A, B, C, K;
int isOk(ll x)
{
    if (A * x * x + B * x + C < K)
        return 0;
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
        cin >> A >> B >> C >> K;
        ll l = 0, r = 1e5;
        while (l < r)
        {
            ll mid = (l + r) / 2;
            if (isOk(mid) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        cout << l << endl;
    }
    return 0;
}