
// Notes ===>> https://cplusplus.com/reference/queue/queue/

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

    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout << "Front element: " << q.front() << endl; // 1
    cout << "Back element: " << q.back() << endl;   // 3
    q.pop();
    cout << "Front element: " << q.front() << endl; // 2
    cout << "Size: " << q.size() << endl;            // 2
    cout << "Is empty: " << q.empty() << endl;       // 0 (false)

    return 0;
}