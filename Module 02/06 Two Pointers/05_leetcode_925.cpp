
// Problem link ===>> https://leetcode.com/problems/long-pressed-name/description/
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

class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int n = name.size();
        int m = typed.size();
        int i = 0, j = 0;
        while (i < n && j < m) {
            if (name[i] == typed[j]) {
                i++;
                j++;
            } else if (j > 0 && typed[j] == typed[j - 1]) {
                j++;
            } else {
                return false;
            }
        }
        while (j < m && typed[j] == typed[j - 1]) {
            j++;
        }
        return i == n && j == m;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    
    return 0;
}