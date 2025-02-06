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
    int l = 0, r = 0, ans;
    for (int i = 0; i < n; i++)
    {
        l = 0, r = i;
        while (l <= r)
        {
            int mid = l + (r - l) / 2, x = i - mid + 1;
            if (v[mid] >= x)
            {
                ans = x, r = mid - 1;
            }
            else
                l = mid + 1;
        }
        cout << i - l + 1 << " ";
    }
    cout << endl;
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