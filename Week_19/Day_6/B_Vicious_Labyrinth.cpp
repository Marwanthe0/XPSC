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
    if (k & 1)
    {
        for (int i = 1; i < n; i++)
        {
            cout << n << " ";
        }
        cout << n - 1 << endl;
    }
    else
    {
        for (int i = 1; i < n - 1; i++)
            cout << n - 1 << " ";
        cout << n << " " << n - 1 << endl;
    }
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