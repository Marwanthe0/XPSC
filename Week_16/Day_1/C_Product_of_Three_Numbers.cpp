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
    for (int i = 2; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            int x = n / i;
            for (int j = 2; j * j <= x; j++)
            {
                if (x % j == 0)
                {
                    if (j == (x / j) || j == i || (x / j) == i)
                        continue;
                    else
                    {
                        yes;
                        vector<int> ans;
                        ans.push_back(i), ans.push_back(j), ans.push_back(x / j);
                        for (auto vl : ans)
                            cout << vl << " ";
                        cout << endl;
                        return;
                    }
                }
            }
        }
    }
    no;
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