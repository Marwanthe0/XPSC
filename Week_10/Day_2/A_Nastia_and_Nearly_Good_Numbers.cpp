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
    ll a, b;
    cin >> a >> b;
    if (b == 1)
    {
        no;
        return;
    }
    yes;
    if (b > 2)
        cout << a << " " << ((a * b) - a) << " " << a * b << endl;
    else
    {
        cout << a << " " << a * (b + 1) << " " << (a + (a * (b + 1))) << endl;
    }
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