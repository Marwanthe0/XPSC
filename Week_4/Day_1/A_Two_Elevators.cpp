#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    ll a, b, c;
    cin >> a >> b >> c;
    if (a < (abs(b - c) + c))
        cout << 1 << endl;
    else if (abs(b - c) + c < a)
        cout << 2 << endl;
    else
        cout << 3 << endl;
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