#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int i,n,k,c=0,s=0;
     cin>>n>>k;
     for(i=1;i<=n;i++)
     {
         s+=i*5;
         if(s>240-k)
         break;
         else
         c++;
     }
cout<<c;
 }