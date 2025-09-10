
// Notes ===>> https://cplusplus.com/reference/queue/priority_queue/

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

    priority_queue<int> pq; // max heap
    pq.push(3);             // {3}
    pq.push(1);             // {3, 1}
    pq.push(4);             // {4, 3, 1}
    pq.push(2);             // {4, 3, 2, 1}
    while (!pq.empty())
    {
        cout << pq.top() << " "; // 4 3 2 1
        pq.pop();
    }
    cout << endl;

    priority_queue<int, vector<int>, greater<int>> minHeap; // min heap
    minHeap.push(3);                                        // {3}
    minHeap.push(1);                                        // {1, 3}
    minHeap.push(4);                                        // {1, 3, 4}
    minHeap.push(2);                                        // {1, 2, 4, 3}
    while (!minHeap.empty())
    {
        cout << minHeap.top() << " "; // 1 2 3 4
        minHeap.pop();
    }
    cout << endl;

    priority_queue<pair<int, int>> pqPair; // max heap of pairs
    pqPair.push({1, 2});                   // {(1, 2)}
    pqPair.push({2, 1});                   // {(2, 1), (1, 2)}
    pqPair.push({1, 3});                   // {(2, 1), (1, 2), (1, 3)}
    pqPair.push({2, 2});                   // {(2, 2), (2, 1), (1, 3), (1, 2)}
    while (!pqPair.empty())
    {
        cout << "{" << pqPair.top().first << ", " << pqPair.top().second << "} "; // {2, 2} {2, 1} {1, 3} {1, 2}
        pqPair.pop();
    }
    cout << endl;

    return 0;
}