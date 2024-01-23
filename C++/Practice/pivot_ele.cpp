#include<bits/stdc++.h>
using namespace std;

int pivotele(int nums[], int size)
{
    /*int mid, start = 0, end = size-1, i, j, sumi=0, sumj=0;
    while(start <= end)
    {
        mid= (start+end)/2;
        if(mid > 0 && mid < size-1)
    {
        sumi=0, sumj=0;
        for(i=0; i < mid; i++)
        sumi=sumi+nums[i];
        for(j = mid+1; j<size; j++)
        sumj=sumj+nums[j];
        if(sumi == sumj)
        return mid;
        if(abs(sumi) > sumj)
        end= mid-1;
        if(abs(sumi) < sumj)
        start = mid+1;
    }
   else
    {
        sumi=0,sumj=0;
        if(mid==0)
        {
        for(i=1; i<size;i++)
        sumi=sumi+nums[i];
        if(sumi==0)
        return 0;
        else
        start = mid+1;
        }
        else
        {
            if(mid==size-1)
            {
            for(j=0; j<size-1; j++)
            sumj=sumj+nums[j];
            if(sumj==0)
            return size-1;
            else 
            start =mid+1;
            }
        }
    }
}
return -1;*/
}

main()
{
    int arr[]={-1,-1,-1,0,1,1};
    cout<<"Pivot at index "<<pivotele(arr,6);
}