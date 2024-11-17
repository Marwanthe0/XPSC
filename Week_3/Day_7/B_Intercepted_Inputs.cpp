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
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }
    int x = n - 2;
    sort(v.begin(), v.end());
    int l = 0, r = n - 1;
    while (l <= r)
    {
        ll ml = v[l] * v[r];
        if (ml == x)
        {
            cout << v[l] << " " << v[r] << endl;
            break;
        }
        if (ml > x)
        {
            r--;
        }
        else
            l++;
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