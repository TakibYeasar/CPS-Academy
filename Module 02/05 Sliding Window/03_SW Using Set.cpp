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

    set<pair<int, int>> st;
    for (int i = 1; i <= k; i++)
    {
        st.insert({x[i], i});
    }

    for (int i = 0; i <= n - k + 1; i++)
    {
        int mn = (*st.begin()).first;
        int mx = (*st.rbegin()).first;

        cout << mn << " " << mx << endl;

        st.erase({x[i], i});
        if (i + k <= n)
        {
            st.insert({x[i + k], i + k});
        }
    }

    return 0;
}