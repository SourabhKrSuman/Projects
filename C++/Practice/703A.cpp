#include <bits/stdc++.h>
using namespace std;

main()
{
    int n, m, c, ms = 0, cs = 0;
    cin >> n;
    while (n--)
    {
        cin >> m >> c;
        if (m > c)
            ms++;
        else if (m < c)
            cs++;
    }
    if (ms > cs)
        cout << "Mishka";
    else if (ms == cs)
        cout << "Friendship is magic!^^";
    else
        cout << "Chris";
}