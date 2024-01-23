#include<bits/stdc++.h>
using namespace std;

main()
{
    int x[3],i;
    for(i=0;i<3;i++)
    cin>>x[i];
    sort(x,x+3);
    cout<<(x[1]-x[0])+(x[2]-x[1]);
}