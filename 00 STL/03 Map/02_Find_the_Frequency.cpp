
// Problem link ===>> https://www.geeksforgeeks.org/problems/find-the-frequency/1

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
    int findFrequency(vector<int> arr, int x){
        map<int, int> m;
        for(int a: arr){
            m[a]++;
        }
        return m[x];
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    return 0;
}