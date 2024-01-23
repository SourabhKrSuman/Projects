#include <bits/stdc++.h>
using namespace std;
int ins_sort(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1;
        for (; j >= 0; j--)
        {
            if (arr[j] > temp)
            {
                arr[j + 1] = arr[j];
            }
            else
                break;
        }
        arr[j + 1] = temp;
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
    int ar[] = {8, 7, 12, 5};
    int size = sizeof(ar) / sizeof(ar[0]);
    ins_sort(ar, size);
    cout << "Sorted array is: ";
    printarr(ar, size);
}
