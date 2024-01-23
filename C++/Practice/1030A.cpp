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
        if(mg[i]==1)
        {
        c++;
        break;
        }
    }
    if(c>0)
    cout<<"HARD";
    else
    cout<<"EASY";
}