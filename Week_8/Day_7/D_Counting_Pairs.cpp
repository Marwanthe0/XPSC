#include <bits/stdc++.h>
#define all(x) x.begin(), x.end()
#define endl '\n'
#define yes cout << "Yes" << endl
#define no cout << "No" << endl

using namespace std;

void solve()
{
    int64_t n, x, y;
    cin >> n >> x >> y;
    vector<int64_t> vec(n);
    int64_t sum = 0;

    for (auto &it : vec)
    {
        cin >> it;
        sum += it;
    }

    sort(all(vec));

    int64_t cnt = 0;

    for (int i = 0; i < n; i++)
    {
        int64_t lower = sum - y - vec[i];
        int64_t upper = sum - x - vec[i];

        int l = lower_bound(vec.begin() + i + 1, vec.end(), lower) - vec.begin();
        int u = upper_bound(vec.begin() + i + 1, vec.end(), upper) - vec.begin();

        cnt += (u - l);
    }

    cout << cnt << endl;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
        solve();
    return 0;
}
