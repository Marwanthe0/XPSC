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
    int n;
    cin >> n;
    cout << n / 2 << endl;
    for (int i = 0; i < (n / 2) - 1; i++)
        cout << 2 << " ";
    if (n & 1)
    {
        cout << 3;
    }
    else
        cout << 2;
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}