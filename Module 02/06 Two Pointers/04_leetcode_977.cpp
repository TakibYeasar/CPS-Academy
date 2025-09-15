
// Problem link ===>> https://leetcode.com/problems/squares-of-a-sorted-array/description/
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
    vector<int> sortedSquares(vector<int> &nums)
    {
        int n = nums.size();
        vector<int> result(n);
        int left = 0, right = n - 1;
        int index = n - 1;
        while (left <= right)
        {
            int leftSquare = nums[left] * nums[left];
            int rightSquare = nums[right] * nums[right];
            if (leftSquare > rightSquare)
            {
                result[index] = leftSquare;
                left++;
            }
            else
            {
                result[index] = rightSquare;
                right--;
            }
            index--;
        }
        return result;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    return 0;
}