
// Notes ===>> https://cplusplus.com/reference/map/map/

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
    
    map<int, int> m; // map<key_type, mapped_type> m;
    m[1] = 100;
    m[2] = 200;
    m[3] = 300;
    m[4] = 400;
    m[5] = 500;

    // Iterating over a map
    for (pair<int, int> a : m)
    {
        cout << a.first << " " << a.second << endl;
    }
    cout << endl;

    // Accessing elements
    cout << m[3] << endl; // 300
    cout << m.at(4) << endl; // 400
    cout << endl;

    // Size of map
    cout << m.size() << endl; // 5
    cout << endl;

    // Erase elements
    m.erase(2); // erase element with key 2
    for (pair<int, int> a : m)
    {
        cout << a.first << " " << a.second << endl;
    }
    cout << endl;
    cout << m.size() << endl; // 4
    cout << endl;

    // Find elements
    if (m.find(3) != m.end())
        cout << "Found 3" << endl;
    else
        cout << "3 Not Found" << endl;
    if (m.find(2) != m.end())
        cout << "Found 2" << endl;
    else
        cout << "2 Not Found" << endl;
    cout << endl;
    
    // Clear the map
    m.clear();
    cout << m.size() << endl; // 0
    cout << endl;

    // pair in map
    map<int, pair<int, int>> mp;
    mp[1] = {10, 20};
    mp[2] = {20, 30};
    mp[3] = {30, 40};
    for (auto it : mp)
    {
        cout << it.first << " -> " << it.second.first << " " << it.second.second << endl;
    }
    cout << endl;
    
    
    return 0;
}