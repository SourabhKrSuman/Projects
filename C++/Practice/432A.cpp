#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,k,a,c=0,l=0;
    cin>>n>>k;
    while(n--)
    {
        cin>>a;
        if(k+a<=5)
        c++;
        if(c==3)
        {
            l++;
            c=0;
        }
    }
    cout<<l;
}