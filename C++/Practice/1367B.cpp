/*#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int t,n,ev=0,od=0,i;
     cin>>t;
     while (t--)
     {
         cin>>n;
         int a[n],ans=0;
         for(i=0;i<n;i++)
         cin>>a[i];
         for(i=0;i<n;i++)
         {
             if(a[i]%2==0)
                 ev++;
                 else
                 od++;
         }
         if(ev!=od)
         cout<<"-1"<<'\n';
         else
         {
         for(i=0;i<n;i++)
         {
         if(i%2!=a[i]%2)
         ans++;
         }
         cout<<ans/2<<'\n';
         }
     }    
 }*/