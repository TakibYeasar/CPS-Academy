
// Problem link ===>> https://leetcode.com/problems/move-zeroes/description/
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
    void moveZeroes(vector<int> &nums)
    {
        int l = 0;
        int n = nums.size();

        for (int r = 0; r < n; r++)
        {
            if (nums[r] != 0)
            {
                swap(nums[l], nums[r]);
                l++;
            }
        }
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    return 0;
}