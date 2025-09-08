
// Problem link ===>> https://codeforces.com/problemset/problem/118/A
// submission link ===>> https://codeforces.com/contest/118/submission/337555989

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

bool isVowel(char c) {
    c = tolower(c);
    return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    string s;
    cin >> s;
    string result;
    for (char c : s) {
        if (!isVowel(c)) {
            result += '.';
            result += tolower(c);
        }
    }
    cout << result << endl;
    
    return 0;
}