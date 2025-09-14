#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

int n;
bool isOk(double x)
{
    if (x * x < n)
        return 0;
    else if (x * x >= n)
        return 1;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    double l = 0, r = n + 1;
    while (r - l > 0.000001)
    {
        double mid = (l + r) / 2;
        if (isOk(mid) == 0)
            l = mid;
        else
            r = mid;
    }
    cout << l << endl;

    return 0;
}