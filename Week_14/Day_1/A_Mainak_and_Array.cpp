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
    int mx = *max_element(all(v)), mn = *min_element(all(v));
    int ans = (v.back() - v.front());
    for (int i = 1; i < n; i++)
    {
        ans = max(ans, v[i - 1] - v[i]);
    }
    ans = max({ans, mx - v.front(), v.back() - mn});
    cout
        << ans << endl;
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