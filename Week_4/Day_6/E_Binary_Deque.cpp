#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    ll n, k;
    cin >> n >> k;
    vector<ll> v(n);
    for (ll i = 0; i < n; i++)
        cin >> v[i];
    ll sum = accumulate(v.begin(), v.end(), 0);
    if (sum < k)
        cout << -1 << endl;
    else if (sum == k)
        cout << 0 << endl;
    else
    {
        ll l = 0, r = n - 1, f = -1, b = n;
        while (sum > k && l < r)
        {
            if (v[l] == 0 && v[r] == 0)
            {
                l++, r--;
                continue;
            }
            else if (v[l] > v[r])
            {
                f = l;
                sum--, l++, r--;
            }
            else if (v[r] > v[l])
            {
                b = r;
                sum--, l++, r--;
            }
            else
            {
                int d1 = l - f, d2 = b - r;
                if (d1 <= d2)
                {
                    f = l;
                    sum--, l++;
                    if (sum <= k)
                    {
                        break;
                    }
                    b = r;
                    sum--, r--;
                }
                else
                {
                    b = r;
                    sum--, r--;
                    if (sum <= k)
                    {
                        break;
                    }
                    f = l;
                    sum--, l++;
                }
            }
        }
        cout << (f + 1) + (n - b) << endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    ll t;
    cin >> t;
    while (t--)
    {
        marwan();
    }
    return 0;
}