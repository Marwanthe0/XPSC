#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int n;
    cin >> n;
    string a, b, c;
    cin >> a;
    cin >> b;
    cin >> c;
    for (int i = 0; i < n; i++)
    {
        if (b[i] != c[i] && c[i] != a[i])
        {
            yes;
            return;
        }
    }
    no;
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