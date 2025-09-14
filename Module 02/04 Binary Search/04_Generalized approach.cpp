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

int isOk(int id, int x)
{
    if (arr[id] < x)
        return 0;
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n = 3;
    int l = 0, r = n;
    int x;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (isOk(mid, x) == 0)
            l = mid + 1;
        else
            r = mid;
    }
    int ans = l;
    cout << ans << endl;
    return 0;
}