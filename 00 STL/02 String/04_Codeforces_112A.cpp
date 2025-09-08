
// Problem link ===>> https://codeforces.com/contest/112/problem/A
// submission link ===>> https://codeforces.com/contest/112/submission/209300308

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

    string str1, str2;
    cin >> str1 >> str2;

    // Convert both strings to lowercase
    transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
    transform(str2.begin(), str2.end(), str2.begin(), ::tolower);

    // Compare the two strings
    int result = str1.compare(str2);

    // Output the result
    if (result < 0)
    {
        cout << "-1" << endl;
    }
    else if (result > 0)
    {
        cout << "1" << endl;
    }
    else
    {
        cout << "0" << endl;
    }

    return 0;
}