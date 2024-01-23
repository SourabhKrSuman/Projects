#include <bits/stdc++.h>
using namespace std;

void bubsort(int *arr, int size)
{
    int flag;
    if (size == 0 || size == 1)
        return;

    for (int i = 0; i < size - 1; i++)
    {
        if (arr[i] > arr[i + 1])
        {
            swap(arr[i], arr[i + 1]);
            flag = 1;
        }
    }
    if (flag == 0)
    {
        exit(0);
    }
    bubsort(arr, size - 1);
    //cout << c << endl;
}

main()
{
    int arr[10] = {12, 29, 1, 0, 15, 17, 21, 2, 89, 63};
    //int arr[10] = {0,1,2,3,4,5,6,7,8,9};
    bubsort(arr, 10);
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << ' ';
    }
} 