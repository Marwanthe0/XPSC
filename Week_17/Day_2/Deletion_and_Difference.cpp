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
    int n;
    cin >> n;
    vector<int> v(n);
    map<int, int> m;
    for (auto &vl : v)
    {
        cin >> vl;
        m[vl]++;
    }
    for (auto &vl : m)
    {
        if (vl.second >= 2 && vl.first)
        {
            m[0] += vl.second / 2;
            vl.second = vl.second % 2;
        }
    }
    int x = 0;
    for (auto vl : m)
    {
        if (vl.second)
            x++;
    }
    cout << x << endl;
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