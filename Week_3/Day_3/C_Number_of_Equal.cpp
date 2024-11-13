#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int n, m;
    cin >> n >> m;
    vector<int> a(n), b(m);
    int k = 0;
    for (auto &vl : a)
        cin >> vl;
    for (auto &vl : b)
        cin >> vl;
    ll ans = 0;
    pair<int, int> p = {NULL, NULL};
    for (int i = 0; i < m; i++)
    {
        int count = 0;
        if (p.first && b[i] == p.first)
        {
            count = p.second;
        }
        else
        {
            while (k < n && a[k] == b[i])
            {
                k++;
                count++;
            }
        }
        p = {b[i], count};
        ans += count;
        // cout << k << " ";
    }
    cout << ans << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}