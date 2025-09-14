#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

// int arr = {1, 10, 50, 56, 60, 67, 1000000};
vector<int> arr = {56, 50, 10, 5, 60, 67, 1000000};

int isOk(int id)
{
    if (arr[id] <= arr[0])
        return 0;
    else
        return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n = arr.size();
    int l = 0, r = n;
    while (l < r)
    {
        int mid = (l + r) / 2;
        if (isOk(mid) == 0)
            l = mid + 1;
        else
            r = mid;
    }
    cout << l - 1 << endl;
    return 0;
}