
// Notes ===>> https://cplusplus.com/reference/set/multiset/

#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    multiset<int> ms;
    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);
    ms.insert(3);
    ms.insert(3);
    ms.insert(4);
    ms.insert(5);
    ms.insert(5); // duplicate elements will be inserted
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    // find an element
    auto it = ms.find(3);
    if (it != ms.end())
    {
        cout << "Element found: " << *it << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // erase an element (all occurrences)
    ms.erase(3);
    cout << "After erasing 3: ";
    for (auto it : ms)
    {
        cout << it << " ";
    }
    cout << endl;

    // size of the multiset
    cout << "Size of the multiset: " << ms.size() << endl;
    // count occurrences of an element
    cout << "Count of 2: " << ms.count(2) << endl;
    // check if the multiset is empty
    if (ms.empty())
    {
        cout << "Multiset is empty" << endl;
    }
    else
    {
        cout << "Multiset is not empty" << endl;
    }

    

    return 0;
}