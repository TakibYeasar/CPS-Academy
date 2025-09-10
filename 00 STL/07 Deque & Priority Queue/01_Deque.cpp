
// Notes ===>> https://cplusplus.com/reference/deque/deque/

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

    deque<int> dq;
    dq.push_back(1);  // {1}
    dq.push_front(2); // {2, 1}
    dq.push_back(3);  // {2, 1, 3}
    dq.push_front(4); // {4, 2, 1, 3}

    for (auto it : dq)
        cout << it << " "; // 4 2 1 3
    cout << endl;

    dq.pop_back(); // {4, 2, 1}
    dq.pop_front(); // {2, 1}
    for (auto it : dq)
        cout << it << " "; // 2 1
    cout << endl;

    cout << dq.size() << endl;    // 2
    cout << dq.empty() << endl;   // 0
    cout << dq.front() << endl;   // 2
    cout << dq.back() << endl;    // 1
    cout << dq.at(0) << endl;     // 2
    cout << dq.at(1) << endl;     // 1
    cout << dq[0] << endl;        // 2
    cout << dq[1] << endl;        // 1
    dq.clear();                   // {}
    cout << dq.size() << endl;    // 0
    cout << dq.empty() << endl;   // 1


    return 0;
}