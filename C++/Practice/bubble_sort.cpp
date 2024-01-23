#include <bits/stdc++.h>
using namespace std;
int bubl_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
}

void printarr(int arr[], int n)
{
    int i;
    for (i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

main()
{
    int ar[] = {8, 7, 12, 15, 90, 29, 50};
    int size = sizeof(ar) / sizeof(ar[0]);
    bubl_sort(ar, size);
    cout << "Sorted array is: ";
    printarr(ar, size);
}
