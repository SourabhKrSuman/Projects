#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int i,c=0,t;
     cin>>t;
     int a[t],b[t];
     for(i=0;i<t;i++)
     {
         cin>>a[i];
         cin>>b[i];
     }
     for(i=0;i<t;i++)
     {
         c=0;
         while(a[i]%b[i]!=0)
         {
             c++;
             a[i]++;
         }
         cout<<c<<'\n';
     }
 }
