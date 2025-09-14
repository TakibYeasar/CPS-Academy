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

    vector<ll> vec = {1, 2, 2, 3, 4, 7, 7, 20, 30, 31};

    ll x;
    cin >> x;
    ll n = vec.size();
    ll left = 0, right = n;

    while (left < right)
    {
        ll mid = (left + right) / 2;

        if (vec[mid] < x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    cout << "Lower bound = " << left << endl;

    left = 0;
    right = n;

    while (left < right)
    {
        ll mid = (left + right) / 2;

        if (vec[mid] <= x)
        {
            left = mid + 1;
        }
        else
        {
            right = mid;
        }
    }
    cout << "Upper bound = " << left << endl;

    return 0;
}