
// Problem link ===>> https://www.geeksforgeeks.org/problems/deque-implementations/1
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

class Solution{
public:
    // Function to insert element x at front of Deque.
    void pushFront(deque<int> &dq, int x) {
        dq.push_front(x);
    }

    // Function to insert element x at back of Deque.
    void pushBack(deque<int> &dq, int x) {
        dq.push_back(x);
    }

    // Function to delete element from front of Deque.
    void popFront(deque<int> &dq) {
        if(!dq.empty()) {
            dq.pop_front();
        }
    }

    // Function to delete element from back of Deque.
    void popBack(deque<int> &dq) {
        if(!dq.empty()) {
            dq.pop_back();
        }
    }

    // Function to return element at front of Deque.
    int getFront(deque<int> &dq) {
        if(!dq.empty()) {
            return dq.front();
        }
        return -1; // Return -1 if deque is empty
    }

    // Function to return element at back of Deque.
    int getBack(deque<int> &dq) {
        if(!dq.empty()) {
            return dq.back();
        }
        return -1; // Return -1 if deque is empty
    }
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);
    
    return 0;
}