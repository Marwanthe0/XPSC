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
    if (n == 1)
    {
        cout << 1 << endl;
        cout << 1 << " " << 2 << endl;
    }
    else
    {
        cout << n - 1 << endl;
        int x = 1;
        for (int i = 1; i <= n - 1; i++)
        {
            cout << x << " " << 3 * (i + 1) << endl;
            if (x == 3)
                x++;
        }
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