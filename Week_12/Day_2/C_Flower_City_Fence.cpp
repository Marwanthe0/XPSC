#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (int i = 0; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (auto &vl : v)
        cin >> vl;
    // sort(all(v));
    vector<int> t = v;
    sort(all(t));
    for (int i = 1; i <= n; i++)
    {
        int x = n - (lower_bound(all(t), i) - t.begin());
        if (v[i - 1] != x)
        {
            no;
            return;
        }
        // cout << x << " ";
    }
    yes;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        marwan();
    }
    return 0;
}