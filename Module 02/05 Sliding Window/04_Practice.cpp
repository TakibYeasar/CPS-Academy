#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int INF = 0x3f3f3f3f;
const long long LINF = 0x3f3f3f3f3f3f3f3fLL;
const int MOD = 1e9 + 7;
const double EPS = 1e-9;
const double PI = acos(-1.0);

// int main()
// {
//     ios_base::sync_with_stdio(false);
//     cout.tie(nullptr);
//     cin.tie(nullptr);

//     string s;
//     cin >> s;
//     int n = s.size();

//     map<char, int> cnt;
//     int window_size = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cnt[s[i]]++;
//         window_size++;
//         if (cnt.size() == 3)
//         {
//             break;
//         }
//     }
//     int mn = window_size;
//     int indx = window_size - 1;
//     for (int i = 0; i < n; i++)
//     {
//         if (cnt[s[i]] == 1)
//         {
//             while (1)
//             {
//                 indx++;
//                 if (indx >= n)
//                 {
//                     break;
//                 }
//                 cnt[s[indx]]++;

//                 if (s[indx] == s[i])
//                 {
//                     break;
//                 }
//             }
//         }
//     }

//     return 0;
// }

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    string s;
    cin >> s;
    int n = s.size();

    queue<char> q;
    for (char c : s)
    {
        q.push(c);
    }

    deque<char> window;
    map<char, int> cnt;
    for (int i = 0; i < n; i++)
    {
        window.push_back(q.front());
        cnt[q.front()]++;
        q.pop();

        if (cnt.size() == 3)
            break;
    }

    int mn = s.size();

    while (1)
    {
        mn = min(n, (int)window.size());
        // cout << window.size() << endl;
        for (int i = 0; i < window.size(); i++)
        {
            cout << window[i];
        }
        cout << endl;

        char x = window.front();
        if (cnt[x] == 1)
        {
            while (!q.empty())
            {
                window.push_back(q.front());
                cnt[q.front()]++;
                q.pop();

                if (cnt[x] > 1)
                    break;
            }
        }

        window.pop_front();
        cnt[x]--;

        if (cnt[x] == 0)
            break;
    }
    cout << mn << endl;

    return 0;
}