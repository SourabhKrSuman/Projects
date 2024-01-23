#include<bits/stdc++.h>
using namespace std;

main()
{
    int x;
    cin>>x;
    if(x<=5)
    cout<<'1';
    else
    if(x%5==0)
    cout<<x/5;
    else
    cout<<1+x/5;
}