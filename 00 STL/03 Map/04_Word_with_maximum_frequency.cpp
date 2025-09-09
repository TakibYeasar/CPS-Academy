
// Problem link ===>> https://www.geeksforgeeks.org/problems/word-with-maximum-frequency0120/1

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
    string mostFrequentWord(string arr[], int n)
    {
        unordered_map<string, int> freqMap;
        for (int i = 0; i < n; i++)
        {
            freqMap[arr[i]]++;
        }

        string maxFreqWord;
        int maxFreq = 0;

        for (const auto &entry : freqMap)
        {
            if (entry.second > maxFreq)
            {
                maxFreq = entry.second;
                maxFreqWord = entry.first;
            }
        }

        return maxFreqWord;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    return 0;
}