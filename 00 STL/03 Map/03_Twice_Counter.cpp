
// Problem link ===>> https://www.geeksforgeeks.org/problems/twice-counter4236/1

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
    int countWords(string list[], int n){
        map<string, int> m;
        for (int i = 0; i < n; i++){
            m[list[i]]++;
        }

        int ans = 0;
        for (pair<string, int> a: m){
            if(a.second==1)
                ans++;
        }
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    return 0;
}