#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,minm=INT_MAX;
        cin>>n;
        int arr[n+5];
        for(int i=0;i<n;i++)
        cin>>arr[i];
        sort(arr,arr+n);
        for(int i=0;i<n-1;i++)
        {
            int d=(arr[i]&arr[i+1])^(arr[i]|arr[i+1]);
            minm=min(minm,d);
        }
            cout << minm << endl;
    }
}
