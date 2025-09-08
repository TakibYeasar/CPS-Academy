
// Problem link ===>> https://www.hackerearth.com/practice/data-structures/trees/binary-search-tree/practice-problems/algorithm/distinct-count/

#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--)
    {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);

        for (int i = 0; i < n; i++){
            cin >> arr[i];
        }

        sort(arr.begin(), arr.end());
        int distinct = 1;
        for (int i = 0; i < n-1; i++)
        {
            if (arr[i] != arr[i+1]){
                distinct++;
            }
        }

        if (distinct ==x)
        {
            cout << "Good" << endl;
        }
        else if (distinct < x)
        {
            cout << "Bad" << endl;
        } else
        {
            cout << "Average" << endl;
        }
    }
    return 0;
}