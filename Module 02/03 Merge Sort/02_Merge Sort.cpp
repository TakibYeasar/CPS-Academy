
// Problem link ===>> https://judge.u-aizu.ac.jp/onlinejudge/description.jsp?id=ALDS1_5_B
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

ll n, cnt=0, arr[500005], temp[500005];

void merge(ll l, ll r)
{
    ll mid = (l + r) / 2;
    ll i1 = l, i2 = mid + 1, j = l;
    while (i1 <= mid && i2 <= r)
    {
        cnt++;
        if (arr[i1] < arr[i2])
        {
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
        cnt++;
        temp[j] = arr[i1];
        j++, i1++;
    }
    while (i2 <= r)
    {
        cnt++;
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
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    mergeSort(0, n - 1);
    for (ll i = 0; i < n; i++)
    {
        cout << arr[i];
        if(i!=n-1)
            cout << " ";
    }
    cout<<endl;
    cout << cnt << endl;

    return 0;
}