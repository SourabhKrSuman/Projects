#include<bits/stdc++.h>
using namespace std;

int firstocr(int arr[],int size,int k)
{
    int start=0, end=size-1, ans;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(k == arr[mid])
        {
            ans= mid;
            end= mid-1;
        }
        else
        if(k > arr[mid])
        start = mid+1;
        else
        end = mid-1;
    }
    return ans;
}

int lastocr(int arr[],int size,int k)
{
    int start=0, end=size-1, ans;
    while(start <= end)
    {
        int mid = (start+end)/2;
        if(k == arr[mid])
        {
            ans= mid;
            start= mid+1;
        }
        else
        if(k > arr[mid])
        start= mid+1;
        else
        end= mid-1;
    }
    return ans;
}

int elefreq(int fst, int lst)
{
    int freq=0;
    freq=(lst-fst)+1;
    return freq;
}

main()
{
    int ar[10]= {0, 0, 1, 1, 1, -2, -2, -2, 2, 9};
    int first= firstocr(ar,10,2);
    int last= lastocr(ar,10,2);
    cout<<"First occurance of 2 is at index: "<<first<<endl;
    cout<<"Last occurance of 2 is at index: "<<last<<endl;
    cout<<"Frequency of the element is: "<<elefreq(first, last);
}