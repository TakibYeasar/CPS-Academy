
// Notes ===>> https://cplusplus.com/reference/stack/stack/

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

    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    cout << "Top element: " << st.top() << endl; // 3
    st.pop();
    cout << "Top element: " << st.top() << endl; // 2
    cout << "Size: " << st.size() << endl;        // 2
    cout << "Is empty: " << st.empty() << endl;   // 0 (false)
    
    return 0;
}