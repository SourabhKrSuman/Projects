#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, i, arr[100000] = {0}, max, ans, j;
        cin >> n;
        for (i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n, greater<int>());
        max = arr[0];
        for (i = max; i >= 0; i--)
        {
            for (j = 2; j < max; j++)
            {
                if (max % j == 0)
                {
                    max--;
                    break;
                }
                else
                ans = max;
            }
        }
        cout << ans << endl;
    }
}