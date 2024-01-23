#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,i,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        if(n%4==0)
        {
            cout<<"YES"<<'\n';
            for(i=1;i<=n/2;i++)
            cout<<2*i<<' ';
            for(i=1;i<n/2;i++)
            cout<<2*i-1<<' ';
            cout<<n/2*3-1<<'\n';
        }
        else
        cout<<"NO"<<'\n';
    }
}