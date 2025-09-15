
// Problem link ===>> https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/description/
// submission link ===>> https://leetcode.com/problems/maximum-points-you-can-obtain-from-cards/submissions/1771139681/

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
    int maxScore(vector<int> &cardPoints, int k)
    {
        int n = cardPoints.size();
        int totalSum = 0;
        for (int point : cardPoints)
        {
            totalSum += point;
        }

        if (k >= n)
        {
            return totalSum;
        }

        int windowSize = n - k;
        int currentWindowSum = 0;

        for (int i = 0; i < windowSize; ++i)
        {
            currentWindowSum += cardPoints[i];
        }

        int minWindowSum = currentWindowSum;

        for (int i = windowSize; i < n; ++i)
        {
            currentWindowSum += cardPoints[i] - cardPoints[i - windowSize];
            minWindowSum = min(minWindowSum, currentWindowSum);
        }

        return totalSum - minWindowSum;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    
    return 0;
}