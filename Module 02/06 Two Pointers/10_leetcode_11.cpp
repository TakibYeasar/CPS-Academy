
// Problem link ===>> https://leetcode.com/problems/container-with-most-water/description/
// submission link ===>> https://leetcode.com/problems/container-with-most-water/submissions/1771810789/

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
    int maxArea(vector<int> &height)
    {
        int max_area = 0;
        int left = 0;
        int right = height.size() - 1;

        while (left < right)
        {
            int area = min(height[left], height[right]) * (right - left);
            max_area = max(max_area, area);

            if (height[left] < height[right])
            {
                left++;
            }
            else
            {
                right--;
            }
        }

        return max_area;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    
    return 0;
}