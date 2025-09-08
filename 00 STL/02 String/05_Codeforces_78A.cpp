
// Problem link ===>> https://codeforces.com/contest/78/problem/A
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

bool isVowel(char ch) {
    return (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u');
}

int vowelCount(const string &s) {
    int count = 0;
    for (char ch : s) {
        if (isVowel(ch)) {
            count++;
        }
    }
    return count;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    string s1, s2, s3;
    getline(cin, s1);
    getline(cin, s2);
    getline(cin, s3);

    if(vowelCount(s1) == 5 && vowelCount(s2) == 7 && vowelCount(s3) == 5) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
    
    return 0;
}