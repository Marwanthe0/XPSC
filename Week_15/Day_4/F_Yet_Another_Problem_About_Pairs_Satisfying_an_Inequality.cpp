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
    int n, ans = 0, sum = 0;
    cin >> n;
    vector<int> v(n + 1), a(n + 1, 0);
    for (int i = 1; i <= n; i++)
        cin >> v[i];
    for (int i = 1; i <= n; i++)
    {
        if (v[i] < i)
        {
            a[i]++;
        }
        a[i] += a[i - 1];
    }
    // for (int i = 1; i <= n; i++)
    // cout << a[i] << " ";
    for (int i = n; i >= 1; i--)
    {
        if (v[i] < i && v[i] >= 1)
        {
            ans += a[v[i] - 1];
        }
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