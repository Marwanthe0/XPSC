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
    int x = 0;
    for (auto &vl : v)
    {
        cin >> vl;
        if (vl % 3 == 1)
            x = 1;
    }
    int sum = accumulate(all(v), 0ll);
    if (sum % 3 == 0)
        cout << 0 << endl;
    else if ((sum + 1) % 3 == 0 || x)
        cout << 1 << endl;
    else
        cout << 2 << endl;
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