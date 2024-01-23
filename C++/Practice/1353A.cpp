#include<bits/stdc++.h>
using namespace std;

main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,i,j,s=0;
        cin>>n>>k;
        int a[n],b[n];
        for(i=0;i<n;i++)
        cin>>a[i];
        for(j=0;j<n;j++)
        cin>>b[j];
        sort(a,a+n);
        sort(b,b+n);
        for(i=0;i<k;i++)
        {
            if(a[i]<b[n-1-i])
            a[i]=b[n-1-i];
        }
        for(i=0;i<n;i++)
        {
            s+=a[i];
        }
        cout<<s<<'\n';
    }
}