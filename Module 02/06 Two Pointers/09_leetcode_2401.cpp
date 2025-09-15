
// Problem link ===>> https://leetcode.com/problems/longest-nice-subarray/description/
// submission link ===>> https://leetcode.com/problems/longest-nice-subarray/submissions/1771809999/

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
    int longestNiceSubarray(vector<int> &nums)
    {
        int n = nums.size();
        int left = 0, right = 0;
        int ans = 1;
        int curOR = 0;
        while (right < n)
        {
            while ((curOR & nums[right]) != 0)
            {
                curOR ^= nums[left];
                left++;
            }
            curOR |= nums[right];
            ans = max(ans, right - left + 1);
            right++;
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