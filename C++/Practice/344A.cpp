#include<bits/stdc++.h>
using namespace std;

main()
{
    int c=0,i,n;
    cin>>n;
    int mg[n];
    for(i=0;i<n;i++)
    {
        cin>>mg[i];
    }
    for(i=0;i<n;i++)
    {
        if(mg[i]!=mg[i+1])
        c++;
    }
    cout<<c;
}