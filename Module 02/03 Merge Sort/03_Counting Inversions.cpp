
// Problem link ===>> https://www.hackerrank.com/challenges/ctci-merge-sort/problem
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

ll n, inv = 0, arr[500005], temp[500005];

void merge(ll l, ll r)
{
    cout << l << " " << endl;
    ll mid = (l + r) / 2;
    ll i1 = l, i2 = mid + 1, j = l;
    while (i1 <= mid && i2 <= r)
    {
        if (arr[i1] < arr[i2])
        {
            inv += i2 - (mid + 1);
            temp[j] = arr[i1];
            i1++;
        }
        else
        {
            temp[j] = arr[i2];
            i2++;
        }
        j++;
    }
    while (i1 <= mid)
    {
        inv += r - mid;
        temp[j] = arr[i1];
        j++, i1++;
    }
    while (i2 <= r)
    {
        temp[j] = arr[i2];
        j++, i2++;
    }
    for (ll j = l; j <= r; j++)
    {
        arr[j] = temp[j];
    }
}

void mergeSort(ll l, ll r)
{
    if (l == r)
        return;
    ll mid = (l + r) / 2;

    // divide
    mergeSort(l, mid);
    mergeSort(mid + 1, r);
    // conqure
    merge(l, r);
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    cin >> n;
    cout << n << endl;

    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    mergeSort(0, n - 1);
    cout << "here" << endl;
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "inversions" << endl;
    cout << inv << endl;

    return 0;
}