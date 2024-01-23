#include <bits/stdc++.h>
using namespace std;

void digits(int num, string arr[])
{
    if (num == 0)
        return;
    int d = num % 10;
    num /= 10;
    digits(num, arr);
    cout << arr[d] << ' ';
}

main()
{
    int num;
    cin >> num;
    string ar[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    digits(num, ar);
}