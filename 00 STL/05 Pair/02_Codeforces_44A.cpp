
// Problem link ===>> https://codeforces.com/contest/44/problem/A
// submission link ===>> https://codeforces.com/contest/44/submission/337964991

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

    set<pair<string, string>> st;
    string s1, s2;
    for (ll i = 0; i < n; i++)
    {
        cin >> s1 >> s2;
        st.insert({s1, s2});
    }
    cout << st.size() << endl;

    return 0;
}