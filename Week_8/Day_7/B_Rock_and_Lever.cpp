#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (ll i = 0; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    forn { cin >> v[i]; }

    sort(all(v));
    map<ll, ll> m;
    forn
    {
        v[i] = __lg(v[i]) + 1;
        m[v[i]]++;
        // cout << v[i] << " ";
    }
    ll ans = 0;
    for (auto &vl : m)
    {
        if (vl.second > 1)
            ans += (vl.second * (vl.second - 1)) / 2;
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        marwan();
    }
    return 0;
}