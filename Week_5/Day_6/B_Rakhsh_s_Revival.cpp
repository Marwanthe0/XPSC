#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int n, m, k;
    cin >> n >> m >> k;
    string s;
    cin >> s;
    int count = 0;
    vector<int> ans;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == '0')
        {
            count++;
        }
        else
        {
            if (count >= k)
                ans.push_back(count);
            count = 0;
        }
    }
    if (count >= k)
        ans.push_back(count);
    ll last = 0;
    for (auto &vl : ans)
    {
        int x = vl / m;
        last += (x / k) + (x % k != 0);
    }
    cout << last << endl;
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