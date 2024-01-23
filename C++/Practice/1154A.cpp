#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int m,i,n[4];
     for(i=0;i<4;i++)
     cin>>n[i];
     sort(n,n+4);
     cout<<n[3]-n[0]<<' '<<n[3]-n[1]<<' '<<n[3]-n[2];
     
 }