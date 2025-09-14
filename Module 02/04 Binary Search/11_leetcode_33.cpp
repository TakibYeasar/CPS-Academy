
// Problem link ===>> https://leetcode.com/problems/search-in-rotated-sorted-array/description/
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

    int getPartition(vector<int> &nums)
    {
        auto isOk = [&](int id)
        {
            if (nums[id] >= nums[0])
                return 0;
            return 1;
        };

        int l = 0, r = nums.size();
        while (l < r)
        {
            ll mid = (l + r) / 2;
            if (isOk(mid) == 0)
                l = mid + 1;
            else
                r = mid;
        }
    }

public:
    int search(vector<int> &nums, int target)
    {
        int partitionId = getPartition(nums);
        int l, r, inLeftPart = 0;
        auto isOk = [&](int id)
        {
            if (nums[id] < target)
                return 0;
            return 1;
        };
        if (target >= nums[0])
        {
            l = 0;
            r = partitionId;
            inLeftPart = 1;
        }
        else
        {
            l = partitionId;
            r = nums.size();
        }
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (isOk(mid) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        if (inLeftPart)
        {
            if (l == partitionId || nums[l] != target)
                return -1;
            else
                return l;
        }
        else
        {
            if (l == nums.size() || nums[l] != target)
                return -1;
            else
                return l;
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