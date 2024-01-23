#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        if (max(n, m) % min(n, m) == 0)
        cout<<"Yes";
        else cout<<"No";
    }
}