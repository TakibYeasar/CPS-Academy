
// Notes ===>> https://cplusplus.com/reference/set/set/

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
    
        set<int> s;
        s.insert(1);
        s.insert(2);
        s.insert(3);
        s.insert(4);
        s.insert(5);
        s.insert(5); // duplicate element will not be inserted
        
        for(auto it : s){
            cout << it << " ";
        }
        cout << endl;
        
        // find an element
        auto it = s.find(3);
        if(it != s.end()){
            cout << "Element found: " << *it << endl;
        } else {
            cout << "Element not found" << endl;
        }
        
        // erase an element
        s.erase(3);
        cout << "After erasing 3: ";
        for(auto it : s){
            cout << it << " ";
        }
        cout << endl;
        
        // size of the set
        cout << "Size of the set: " << s.size() << endl;
        
        // check if the set is empty
        if(s.empty()){
            cout << "Set is empty" << endl;
        } else {
            cout << "Set is not empty" << endl;
        }

        // last element
        cout << "Last element: " << *s.rbegin() << endl;
        cout << "Last element using --end(): " << *(--s.end()) << endl;
        // first element
        cout << "First element: " << *s.begin() << endl;
        cout << "First element using ++begin(): " << *(++s.begin() - 1) << endl;

        // count of an element
        cout << "Count of 2: " << s.count(2) << endl;

        // pair in set
        set<pair<int, int>> sp;
        sp.insert({1, 2});
        sp.insert({3, 4});
        sp.insert({1, 2}); // duplicate pair will not be inserted
        cout << "Set of pairs: ";
        for(auto it : sp){
            cout << "{" << it.first << ", " << it.second << "} ";
        }
        cout << endl;

        
    
    return 0;
}