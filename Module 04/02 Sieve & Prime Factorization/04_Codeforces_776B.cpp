
// Problem link ===>> https://codeforces.com/contest/776/problem/B
// submission link ===>> https://codeforces.com/contest/776/submission/350800806

#include <bits/stdc++.h>
#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace std;
using namespace __gnu_pbds;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);
template <typename T>
using ordered_set = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename T>
using ordered_set_mul = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map = tree<
    K, V, less<K>, rb_tree_tag, tree_order_statistics_node_update>;
template <typename K, typename V>
using ordered_map_mul = tree<
    K, V, less_equal<K>, rb_tree_tag, tree_order_statistics_node_update>;

const ll N = (ll)1e8 + 5;
bitset<N> isPrime;
// isPrime[i] = 1 means prime
// isPrime[i] = 0 means composite

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    int t = 1;
    // cin >> t;
    while(t--) {
 
 
        // Assume all odd numbers are prime
        for(int i = 3; i < N; i += 2) {
            isPrime[i] = 1;
        }
 
        // 2 is the only even prime
        isPrime[2] = 1; 
 
        // Checking needed only till square root of N
        // +2 because of avoiding any chance of precession error
        int sq = sqrt(N) + 2;
 
 
 
        for(int i = 3; i <= sq; i += 2) {
 
            // For example, if a number 24 is divisible by 6, it's already divisible by 3 (a smaller prime factor)
            // So no need to check with a number which is not prime
            if(isPrime[i] == 0) {
                continue;
            }
 
            for(int j = i * i; j <= N; j += 2 * i) {
                isPrime[j] = 0;
            }
        }
 
        // for(int i = 1; i <= n; i++) {
        //     if(isPrime[i] == 1) {
        //         // v.push_back(i);
        //     }
        // }
 
        int n;
        cin >> n;
 
        if(n <= 2) {
            cout << 1 << "\n";
        } else {
            cout << 2 << "\n";
        }
 
        for(int i = 2; i <= n + 1; i++) {
            if(isPrime[i] == 1) {
                cout << 1 << " ";
            } else {
                cout << 2 << " ";
            }
        }
 
    }
    
    return 0;
}