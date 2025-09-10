
// Problem link ===>> https://toph.co/p/neat-brackets
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

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string s;
    cin >> s;
    ll n = s.size();

    stack<char> st;
    ll f = 1;

    for (ll i = 0; i < n; i++)
    {
        if (s[i] == '(')
        {
            st.push('(');
        }
        else
        {
            if (!st.empty())
            {
                st.pop();
            }
            else
            {
                f = 0;
                break;
            }
        }
    }

    if (st.empty() == 0)
        f = 0;
    if (f)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}