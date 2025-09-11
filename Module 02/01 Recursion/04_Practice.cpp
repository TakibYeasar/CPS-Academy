
// Problem link ===>>
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

int power(int a, int b)
{
    if (b == 0)
        return 1;

    if (b % 2 == 0)
    {
        int half = power(a, b / 2);
        return half * half;
    }
    else
    {
        return a * power(a, b - 1);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int a, b;
    cin >> a >> b;

    cout << power(a, b) << endl;

    return 0;
}