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
    map<pair<int, int>, int> m;
    for (int i = 0; i < k; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a != b)
            m[{min(a, b), max(a, b)}]++;
    }
    cout << k - m.size() << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}