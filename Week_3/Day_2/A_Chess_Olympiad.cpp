#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define M 1000000007
#define N 1000000
#define yes cout << "YES" << endl
#define no cout << "NO" << endl
void marwan()
{
    int a, b, c;
    cin >> a >> b >> c;
    a += 4 - (a + b + c);
    if (a > c)
        yes;
    else
        no;
}
int main()
{
    ios_base::sync_with_stdio(false);
    marwan();
    return 0;
}