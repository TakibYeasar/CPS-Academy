
// Problem link ===>> https://leetcode.com/problems/find-all-anagrams-in-a-string/description/
// submission link ===>> https://leetcode.com/problems/find-all-anagrams-in-a-string/submissions/1771170535/

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
    vector<int> findAnagrams(string s, string p)
    {
        vector<int> ans;
        if (s.size() < p.size())
            return ans;

        vector<int> countP(26, 0), countS(26, 0);
        for (char c : p)
            countP[c - 'a']++;

        int windowSize = p.size();
        for (int i = 0; i < windowSize; i++)
            countS[s[i] - 'a']++;

        if (countP == countS)
            ans.push_back(0);

        for (int i = windowSize; i < s.size(); i++)
        {
            countS[s[i] - 'a']++;
            countS[s[i - windowSize] - 'a']--;

            if (countP == countS)
                ans.push_back(i - windowSize + 1);
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