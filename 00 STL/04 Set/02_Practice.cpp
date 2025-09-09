

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

    int n;
    cin >> n;

    set<int> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(i);
    }

    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;

        s.erase(x);
    }

    cout << *s.begin() << endl;

    return 0;
}