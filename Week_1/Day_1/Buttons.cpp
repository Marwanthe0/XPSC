#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int a, b;
    cin >> a >> b;
    if (a == b)
        cout << a * 2 << endl;
    else
        cout << max(a, b) + (max(a, b) - 1) << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}