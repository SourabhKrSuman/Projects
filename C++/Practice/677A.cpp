#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n,h,c=0;
    cin>>n>>h;
    int ar[n];
    for(i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(i=0;i<n;i++)
    {
        if(ar[i]>h)
        c+=2;
        else
        {
            c++;
        }
        
    }
    cout<<c;
}