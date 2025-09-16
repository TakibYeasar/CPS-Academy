
// Problem link ===>> https://leetcode.com/problems/count-of-smaller-numbers-after-self/description/
// submission link ===>> https://leetcode.com/problems/count-of-smaller-numbers-after-self/submissions/1597065168/

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

class Solution
{
public:
    vector<int> countSmaller(vector<int> &nums)
    {
        ordered_set_mul<int> oset;
        vector<int> ret;
        for (int i = nums.size() - 1; i >= 0; i--)
        {
            oset.insert(nums[i]);
            // ret.push_back(oset.order_of_key(nums[i]));
            ret[i] = oset.order_of_key(nums[i]);
        }
        // reverse(ret.begin(), ret.end());
        return ret;
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