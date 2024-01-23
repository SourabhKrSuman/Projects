#include<bits/stdc++.h>
using namespace std;

main()
{
    int c=0;
    long long n;
    cin>>n;
    while(n!=0)
    {
        if(n%10==7||n%10==4)
        {
            c++;
        }
        n/=10;
    }
    if(c==4||c==7)
    cout<<"YES";
    else
    {
        cout<<"NO";
    } 
}