
// Problem link ===>> https://www.geeksforgeeks.org/problems/first-and-last-occurrences-of-x3116/1
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

class Solution
{
public:
    vector<int> find(vector<int> &arr, int x)
    {
        int l = lower_bound(arr.begin(), arr.end(), x) - arr.begin();
        int r = upper_bound(arr.begin(), arr.end(), x) - arr.begin();

        if(l==r)
            return {-1, -1};
        else
            return {l, r - 1};
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    return 0;
}