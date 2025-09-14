#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

int isOk(int id, int x)
{
    if (id * id <= x)
        return 0;
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n;
    cin >> n;
    int l = 0, r = 1e9;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (isOk(mid, n) == 0)
            l = mid + 1;
        else
            r = mid;
    }
    cout << (l - 1) * (l - 1) << endl;
    return 0;
}