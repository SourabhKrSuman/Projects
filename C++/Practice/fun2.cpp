#include <bits/stdc++.h>
using namespace std;

int fibonnachi()
{
    int a = 0, b = 1, n, c = 0;
    cout << "Enter nth term: ";
    cin >> n;
    for (int i = 1; i < n - 1; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return c;
}

int main()
{
    cout << "Term is " << fibonnachi();
}