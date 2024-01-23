#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,s=0,l;
    cin>>n;
    if(n>=100)
    {
        l=n/100;
        s+=l;
        n%=100;
    }
    if(n>=20)
    {
        l=n/20;
        s+=l;
        n%=20;
    }
    if(n>=10)
    {
        l=n/10;
        s+=l;
        n%=10;
    }
    if(n>=5)
    {
        l=n/5;
        s+=l;
        n%=5;
    }
    if(n>=1)
    {
        s+=n;
    }
    cout<<s;
}