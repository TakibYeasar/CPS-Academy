
// Problem link ===>> https://leetcode.com/problems/search-insert-position/description/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

class Solution
{
    int isOk(int id, int x, vector<int>&arr){
        if(arr[id]<x)
            return 0;
        else
            return 1;
    }
public:
    int searchInsert(vector<int> &nums, int target)
    {
        int n = nums.size();
        int l = 0, r = n;
        int x=target;
        while (l < r)
        {
            int mid = (l + r) / 2;
            if (isOk(mid, x, nums) == 0)
                l = mid + 1;
            else
                r = mid;
        }
        int ans = l;
        return ans;
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;

        
    }
    return 0;
}