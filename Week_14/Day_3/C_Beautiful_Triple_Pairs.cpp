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
    for (auto &vl : v)
        cin >> vl;
    map<tuple<int, int, int>, int> m;
    int ans = 0;
    for (int i = 0; i < n - 2; i++)
    {
        int x = v[i], y = v[i + 1], z = v[i + 2];
        ans += m[{x, y, 0}] + m[{x, 0, z}] + m[{0, y, z}] - 3 * (m[{x, y, z}]);
        m[{x, y, 0}]++, m[{x, 0, z}]++, m[{0, y, z}]++, m[{x, y, z}]++;
    }
    cout << ans << endl;
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