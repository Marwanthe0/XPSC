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
    if (n <= 4)
        cout << -1 << endl;
    else
    {
        for (int i = 2; i <= n; i += 2)
        {
            if (i != 4)
                cout << i << " ";
        }
        cout << 4 << " " << 5 << " ";
        for (int i = 1; i <= n; i += 2)
        {
            if (i != 5)
                cout << i << " ";
        }
        cout << endl;
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