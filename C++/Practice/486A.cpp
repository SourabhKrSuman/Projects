#include<bits/stdc++.h>
using namespace std;

main()
{
    long long n,i,s=0;
    int c2=0;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c2++;
        if(c2==2)
        { 
            s=s+i;
            c2=0;
        } 
        else
        {
            s=s-i;
        }
    }
    cout<<s;
}