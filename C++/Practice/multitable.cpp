#include<bits/stdc++.h>
using namespace std;
 
main()
{
    int n,i,j,p,m,st;
    cout<<"Enter starting from: ";
    cin>>st;
    cout<<"Enter nth term: ";
    cin>>n;
    cout<<"Enter multiple upto: ";
    cin>>m;
    for(i=st;i<=n;i++)
    {
        for (j=1;j<=m;j++)
        {
            p=i*j;
            cout<<i<<'*'<<j<<'='<<p<<'\n';
        }
        cout<<'\n';
    }
}