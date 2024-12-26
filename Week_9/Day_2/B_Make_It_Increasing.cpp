#include <bits/stdc++.h>
using namespace std;
#define ll int64_t
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (int i = 0; i < n; i++)
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    ll n;
    cin >> n;
    vector<ll> v(n);
    for (auto &vl : v)
        cin >> vl;
    ll ans = 0;
    for (ll i = n - 2; i >= 0; i--)
    {
        ll count = 0;
        if (!v[i + 1])
        {
            cout << -1 << endl;
            return;
        }
        while (v[i] >= v[i + 1])
        {
            v[i] /= 2;
            count++;
        }
        ans += count;
    }
    cout << ans << endl;
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