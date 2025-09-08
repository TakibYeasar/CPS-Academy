
// Problem link ===>> https://codeforces.com/problemset/problem/381/A
// submission link ===>> https://codeforces.com/contest/381/submission/309604525

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
    vector<int> arr(n);

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int L = 0, R = n - 1;
    int SerejaScore = 0, DimaScore = 0;

    for (int turn = 0; turn < n; turn++)
    {
        if (turn % 2 == 0)
        {
            //  Serejas turn
            if (arr[L] > arr[R])
            {
                SerejaScore += arr[L];
                L++;
            }
            else
            {
                SerejaScore += arr[R];
                R--;
            }
        }
        else
        {
            //  Dimas turn
            if (arr[L] > arr[R])
            {
                DimaScore += arr[L];
                L++;
            }
            else
            {
                DimaScore += arr[R];
                R--;
            }
        }
    }

    cout << SerejaScore << " " << DimaScore << endl;

    return 0;
}