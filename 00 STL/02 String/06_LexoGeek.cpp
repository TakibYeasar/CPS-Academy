
// Problem link ===>> https://www.hackerearth.com/problem/algorithm/lexogeek-e6450fb7/
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

ll getModIndex(const string &s)
{
    ll n = s.size();
    for (ll i = n - 2; i >= 0; i--)
    {
        if (s[i] < s[i + 1])
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string s;
    cin >> s;

    ll modIdx = getModIndex(s);
    if (modIdx == -1)
    {
        cout << "no answer" << endl;
    }
    else
    {
        for(ll i = modIdx + 1; i < s.size(); i++)
        {
            if(s[i] > s[modIdx])
            {
                swap(s[i], s[modIdx]);
                break;
            }
        }
        reverse(s.begin() + modIdx + 1, s.end());
        cout << s << endl;
    }

    return 0;
}