#include <bits/stdc++.h>
using namespace std;
#define int long long
#define M 1000000007
#define N 1000000
#define endl "\n"
#define all(v) v.begin(), v.end()
#define forn for (int i = 0; i < n; i++)
#define yes cout << "Yes" << endl
#define no cout << "No" << endl
void marwan()
{
    string s;
    cin >> s;
    int n = s.size(), count = 0;
    stack<char> st;
    for (int i = 0; i < n; i++)
    {
        if (!st.empty() && st.top() == s[i])
        {
            count++;
            st.pop();
        }
        else
            st.push(s[i]);
    }
    if (count & 1)
        yes;
    else
        no;
}
int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    marwan();
    return 0;
}