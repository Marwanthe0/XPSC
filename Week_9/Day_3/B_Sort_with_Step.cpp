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
    int n, k, count = 0;
    cin >> n >> k;
    vector<int> v(n + 1);
    for (int i = 1; i <= n; i++)
    {
        cin >> v[i];
        if ((v[i] - i) % k != 0)
            count++;
    }
    if (count > 2)
        cout << -1 << endl;
    else
        cout << ((!count) ? 0 : 1) << endl;
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