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
    string a, b;
    cin >> a >> b;
    if (a == "sick" && b == "sick")
        cout << 1 << endl;
    else if (a == "sick")
        cout << 2 << endl;
    else if (b == "sick")
        cout << 3 << endl;
    else
        cout << 4 << endl;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}