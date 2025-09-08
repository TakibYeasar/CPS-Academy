
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

    ll n;
    cin >> n;

    ll x;
    vector<ll> myvec;
    for (int i = 0; i < n; i++)
    {
        cin >> x;
        myvec.push_back(x);
    }

    reverse(myvec.begin(), myvec.end());
    for(int i = 0; i < myvec.size(); i++)
    {
        cout << myvec[i] << " ";
    }
    cout << endl;

    return 0;
}