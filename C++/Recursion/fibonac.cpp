#include <bits/stdc++.h>
using namespace std;

int fibo(int trm)
{
    if (trm == 1 || trm == 0)
        return 0;
    if (trm == 2)
        return 1;
    return fibo(trm - 1) + fibo(trm - 2);
}

main()
{
    int n;
    cin >> n;
    cout << fibo(n);
}