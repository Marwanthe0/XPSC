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
    string s;
    cin >> s;
    map<char, int> m;
    char b;
    int mx = 0;
    for (auto c : s)
    {
        m[c]++;
        if (m[c] > mx)
        {
            mx = m[c];
            b = c;
        }
    }
    if (mx == m.begin()->second && mx == (--m.end())->second)
    {
        b = s[s.size() / 2];
    }
    map<int, int> mp;
    int n = s.size(), count = 0;
    cerr << mx << " " << b << endl;
    while (mp.size() < (s.size() - mx))
    {
        for (int i = 0; i < n; i++)
        {
            if (s[i] == b)
                continue;
            if ((mp.find(i) == mp.end()))
            {
                mp[i]++;
                cerr << s[i] << " ";
                i++;
                while (i < n && mp.find(i) != mp.end())
                {
                    i++;
                }
            }
        }
        count++;
        cerr << endl;
    }
    cerr << endl;
    cout << count << endl;
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