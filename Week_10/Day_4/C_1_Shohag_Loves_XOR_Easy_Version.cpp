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
    ll n;
    ll m;
    cin >> n >> m;
    ll count = 0;
    for (ll i = 1; i <= min(2 * n, m); i++)
    {
        ll xr = (n ^ i);
        if (n != i and ((n % xr == 0) or (i % xr == 0)))
            count++;
        // cout << xr << " ";
    }
    cout << count << endl;
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