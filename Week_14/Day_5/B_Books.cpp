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
    int n, k;
    cin >> n >> k;
    vector<int> v(n), pf(n + 1, 0);
    for (auto &vl : v)
        cin >> vl;
    for (int i = 1; i <= n; i++)
    {
        pf[i] = v[i - 1] + pf[i - 1];
    }
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        // cout << pf[i] << " ";
        ans = max(ans, (int)(upper_bound(all(pf), k + pf[i - 1]) - pf.begin()) - i);
    }
    cout << ans << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}