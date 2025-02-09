#include <bits/stdc++.h>
using namespace std;
#define int long long
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (int i = 0; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m), c;
    for (auto &vl : a)
        cin >> vl;
    for (auto &vl : b)
        cin >> vl;
    for (auto vl : a)
        c.push_back(b[0] - vl);
    vector<int> ans;
    ans.push_back(min(a.front(), c.front()));
    for (int i = 1; i < n; i++)
    {
        if (a[i] >= ans.back() && c[i] >= ans.back())
        {
            ans.push_back(min(a[i], c[i]));
        }
        else if (a[i] >= ans.back())
        {
            ans.push_back(a[i]);
        }
        else if (c[i] >= ans.back())
        {
            ans.push_back(c[i]);
        }
        else
        {
            no;
            return;
        }
    }
    yes;
}
int32_t main()
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