
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

vector<int> coins = {5, 12, 23};
int dp[100005];

int isPossible(int n)
{
    if (n < 0)
        return 0;
    if (n == 0)
        return 1;

    // if (isPossible(n - coins[0]) || isPossible(n - coins[1]) || isPossible(n - coins[2]))
    //     return 1;
    // return 0;

    if (dp[n] != -1)
        return dp[n];
    for(int coin : coins)
    {
        if (isPossible(n - coin))
            return dp[n] = 1;
    }
    return dp[n] = 0;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int n;
    cin >> n;

    // if (isPossible(n))
    //     cout << "YES" << endl;
    // else
    //     cout << "NO" << endl;

    memset(dp, -1, sizeof(dp));
    if (isPossible(n))
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}