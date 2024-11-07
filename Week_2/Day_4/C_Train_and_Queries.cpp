#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    char c;
    cin >> c;
    int n, k;
    cin >> n >> k;
    vector<ll> v(n);
    map<int, set<int>> m;
    deque<int> dq;
    set<int> s;
    for (auto &vl : v)
        cin >> vl;
    for (int i = n - 1; i >= 0; i--)
    {
        m[v[i]] = s;
        s.insert(v[i]);
    }
    // for (auto vl : m)
    // {
    //     cout << vl.first << endl;
    //     for (auto vls : vl.second)
    //         cout << vls << " ";
    //     cout << endl;
    // }
    while (k--)
    {
        int a, b;
        cin >> a >> b;
        if (m.count(a) == 0)
            cout << "NO";
        else
        {
            auto it = lower_bound(m[a].begin(), m[a].end(), b);
            if (*it != b)
                cout << "NO";
            else
            {
                cout << "YES";
            }
        }
        cout << endl;
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