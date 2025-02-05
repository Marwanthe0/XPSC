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
    vector<int> v(n);
    for (auto &vl : v)
        cin >> vl;
    vector<int> d;
    for (int i = 1; i <= n; i++)
    {
        if (v[i] < v[i - 1])
            d.push_back(i);
    }
    int l = 0, r = 0, count = 1, ans = 1;
    for (int i = 1; i < n; i++)
    {
        if (v[i] >= v[i - 1])
            r = i;
        else
        {
            l = i;
        }
        ans = max(ans, r - l + 1);
    }
    for (auto vl : d)
    {
        v[vl] *= k;
        l = 0, r = 0;
        for (int i = 1; i < n; i++)
        {
            if (v[i] >= v[i - 1])
                r = i;
            else
            {
                l = i;
            }
            ans = max(ans, r - l + 1);
        }
        v[vl] /= k;
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