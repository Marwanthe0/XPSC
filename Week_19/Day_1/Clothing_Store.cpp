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
    int x, y, z, a, b, c;
    cin >> x >> y >> z >> a >> b >> c;
    int ans = 0;
    ans += min(c, z);
    z -= ans;
    y += z;
    ans += min(b, y);
    y -= min(b, y);
    x += y;
    ans += min(a, x);
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