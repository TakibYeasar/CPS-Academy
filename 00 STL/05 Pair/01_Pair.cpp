
// Notes ===>> https://cplusplus.com/reference/utility/pair/

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

    // // pair in stl
    // pair<int, string> p;
    // p.first = 10;
    // p.second = "Hello";
    // cout << p.first << " " << p.second << endl;

    pair<int, string> student;
    vector<pair<int, string>> allStudents;
    int n;
    cin >> n;
    int roll;
    string name;
    for (int i = 0; i < n; i++)
    {
        cin >> roll >> name;
        student = make_pair(roll, name);
        allStudents.push_back(student);
    }

    for (auto st : allStudents)
    {
        cout << "Roll: " << st.first << "Name: " << st.second << endl;
    }

    return 0;
}