
// Notes ===>> https://cplusplus.com/reference/map/multimap/

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

    multimap<int, string> mm;
    mm.insert({1, "apple"});
    mm.insert({2, "banana"});
    mm.insert({2, "blueberry"}); // duplicate keys will be inserted
    mm.insert({3, "cherry"});
    mm.insert({3, "cranberry"});
    mm.insert({3, "citrus"});
    mm.insert({4, "date"});
    mm.insert({5, "elderberry"});
    for (auto it : mm)
    {
        cout << it.first << " -> " << it.second << endl;
    }
    cout << endl;

    // find an element
    auto it = mm.find(3);
    if (it != mm.end())
    {
        cout << "Element found: " << it->first << " -> " << it->second << endl;
    }
    else
    {
        cout << "Element not found" << endl;
    }

    // erase an element (all occurrences)
    mm.erase(3);
    cout << "After erasing key 3: " << endl;
    for (auto it : mm)
    {
        cout << it.first << " -> " << it.second << endl;
    }

    // size of the multimap
    cout << "Size of the multimap: " << mm.size() << endl;
    // count occurrences of a key
    cout << "Count of key 2: " << mm.count(2) << endl;
    // check if the multimap is empty
    if (mm.empty())
    {
        cout << "Multimap is empty" << endl;
    }
    else
    {
        cout << "Multimap is not empty" << endl;
    }

    return 0;
}