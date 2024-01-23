#include <iostream>
using namespace std;

main()
{
    int n,i;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    cin>>arr[i];
    if(n==1)
    cout<<0;
   else
    if(arr[0]>=arr[0+1])
    cout<<0;
    else
    if(arr[n-1]>=arr[n-2])
    cout<<n-1;
    else
    for(i=1;i<n-1;i++)
    {
        if(arr[i-1]<arr[i] && arr[i]>arr[i+1])
        cout<<i<<' ';
        break;
    }
}