
// Problem link ===>> https://cses.fi/problemset/task/1076
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

multiset<ll> lowers, highers;

void addNumber(ll number)
{
    if (lowers.size() == 0 || number < *lowers.rbegin())
    {
        lowers.insert(number);
    }
    else
    {
        highers.insert(number);
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    ll n, k;
    cin >> n >> k;

    vector<ll> arr(n);
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    vector<double> medians;
    for (ll i = 0; i < n; i++)
    {
        addNumber(arr[i]);

        // rebalance
        if (lowers.size() - highers.size() > 1)
        {
            highers.insert(*lowers.rbegin());
            lowers.erase(prev(lowers.end()));
        }
        else if (highers.size() - lowers.size() > 1)
        {
            lowers.insert(*highers.begin());
            highers.erase(highers.begin());
        }

        if (i >= k - 1)
        {
            // get median
            if (lowers.size() == highers.size())
            {
                double median = ((double)(*lowers.rbegin()) + (double)(*highers.begin())) / 2.0;
                medians.push_back(median);
            }
            else if (lowers.size() > highers.size())
            {
                double median = (double)(*lowers.rbegin());
                medians.push_back(median);
            }
            else
            {
                double median = (double)(*highers.begin());
                medians.push_back(median);
            }

            // remove the element going out of the window
            ll elementToBeRemoved = arr[i - k + 1];
            if (elementToBeRemoved <= *lowers.rbegin())
            {
                lowers.erase(lowers.find(elementToBeRemoved));
            }
            else
            {
                highers.erase(highers.find(elementToBeRemoved));
            }

            // rebalance
            if (lowers.size() - highers.size() > 1)
            {
                highers.insert(*lowers.rbegin());
                lowers.erase(prev(lowers.end()));
            }
            else if (highers.size() - lowers.size() > 1)
            {
                lowers.insert(*highers.begin());
                highers.erase(highers.begin());
            }
        }
    }
    for (double median : medians)
    {
        if (median == (ll)median)
        {
            cout << (ll)median << " ";
        }
        else
        {
            cout << fixed << setprecision(1) << median << " ";
        }
    }

    return 0;
}