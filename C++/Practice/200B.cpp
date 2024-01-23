#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int n,r=0,i;
     cin>>n;
     int p[n];
     for(i=0;i<n;i++)
     {
         cin>>p[i];
     }
     for(i=0;i<n;i++)
     {
         r+=p[i];
     }
     cout<<(double)r/n;
 }