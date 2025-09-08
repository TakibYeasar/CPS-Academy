
// Notes ===>> https://cplusplus.com/reference/string/

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

    // char x = 'A';
    // string s = "Hello";
    // cout << s << endl;

    // string s1 = "Hello";
    // string s2 = "World";
    // string s3 = s1 + " " + s2; // Concatenation
    // cout << s3 << endl;

    // string s;
    // s.push_back('H'); // Insert character at the end
    // s.push_back('i');
    // cout << s << endl;

    string s = "Hello, World!";
    // cout << s.size() << endl; // Length of the string
    // cout << s[7] << endl;     // Access character at index 7

    // s[7] = 'w'; // Modify character at index 7
    // cout << s << endl;

    // s = s + " How are you?"; // Concatenate another string
    // cout << s << endl;

    // cout << s.back() << endl; // Access last character
    // cout << s[s.size() - 1] << endl;

    // cout << s.front() << endl; // Access first character
    // cout << s[0] << endl;

    // s.pop_back(); // Remove last character
    // cout << s << endl;

    // s.clear(); // Clear the string
    // cout << s << endl;

    // for (int i = 0; i < s.size(); i++)
    // {
    //     cout << s[i] << " ";
    // }
    // cout << endl;

    // for (char c : s) // Range-based for loop
    // {
    //     cout << c << " ";
    // }
    // cout << endl;

    // strign:iterator it;
    // for (it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    // for(auto it = s.begin(); it != s.end(); it++)
    // {
    //     cout << *it << " ";
    // }
    // cout << endl;

    s.erase(5, 7); // Erase 7 characters starting from index 5
    cout << s << endl;
    reverse(s.begin(), s.end()); // Reverse the string
    cout << s << endl;

    


    return 0;
}