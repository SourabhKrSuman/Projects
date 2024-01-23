#include <bits/stdc++.h>
using namespace std;
int sel_sort(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int min = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[min])
                min = j;
        }
        swap(arr[min], arr[i]);
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
    sel_sort(ar, size);
    cout << "Sorted array is: ";
    printarr(ar, size);
}
