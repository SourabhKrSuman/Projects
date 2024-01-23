#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,t;
    cin>>t;
    int n[t];
    for(i=0;i<t;i++)
    {
        cin>>n[i];
    }
    for(i=0;i<t;i++)
    {
        cout<<(n[i]-1)/2<<'\n';
    }
}