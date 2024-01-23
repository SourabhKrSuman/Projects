#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,i,p[101],q[101],c=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>p[i];
        cin>>q[i];
    }
    for(i=0;i<n;i++)
    {
        if(q[i]-p[i]>=2)
        c++;
    }
    if(c>0)
    cout<<c;
    else
    cout<<c;

}