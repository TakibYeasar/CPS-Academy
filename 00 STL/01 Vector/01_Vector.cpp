
// Notes ===>> https://cplusplus.com/reference/vector/vector/

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

    vector<ll> myvec;
    // if (myvec.begin() == myvec.end())
    //     cout << "Vector is empty" << endl;
    // else
    //     cout << "Vector is not empty" << endl;

    // myvec.push_back(10);
    for (int i = 0; i < 10; i++)
    {
        myvec.push_back(i);
    }
    if (myvec.begin() == myvec.end())
    {
        cout << "Vector is empty" << endl;
    }
    else
        cout << "Vector is not empty" << endl;

    // Accessing elements
    cout << "Size: " << myvec.size() << endl;
    for (int i = 0; i < myvec.size(); i++)
    {
        cout << myvec[i] << " ";
    }
    cout << endl;
    cout << "Last Element: " << myvec.back() << endl;

    // Sorting the vector
    sort(myvec.begin(), myvec.end());
    for (int i = 0; i < myvec.size(); i++)
    {
        cout << myvec[i] << " ";
    }
    cout << endl;
    cout << "Last Element: " << myvec.back() << endl;

    // Removing last element
    myvec.pop_back();
    cout << "Size: " << myvec.size() << endl;
    cout << "Last Element: " << myvec.back() << endl;

    return 0;
}