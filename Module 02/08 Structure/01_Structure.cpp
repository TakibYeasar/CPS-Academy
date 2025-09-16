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

struct Student
{
    int id;
    string name;
    float marks;
};

int main()
{
    ios_base::sync_with_stdio(false);
    cout.tie(nullptr);
    cin.tie(nullptr);

    // Creating structure variables
    Student s1, s2;

    // Assigning values to first student
    s1.id = 101;
    s1.name = "Alice";
    s1.marks = 89.5;

    // Assigning values to second student
    s2.id = 102;
    s2.name = "Bob";
    s2.marks = 76.8;

    // Printing student details
    cout << "Student 1:" << endl;
    cout << "ID: " << s1.id << ", Name: " << s1.name << ", Marks: " << s1.marks << endl;

    cout << "\nStudent 2:" << endl;
    cout << "ID: " << s2.id << ", Name: " << s2.name << ", Marks: " << s2.marks << endl;

    return 0;
}