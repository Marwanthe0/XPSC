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
int ans(int n, int k)
{
    int x = (n / 2) + (n % 2);
    if (k <= x)
        return (2 * k) - 1;
    else
        return 2 * ans(n / 2, k - x);
}
void marwan()
{
    int n, k;
    cin >> n >> k;
    cout << ans(n, k) << endl;
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