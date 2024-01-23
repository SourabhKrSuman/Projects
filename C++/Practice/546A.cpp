#include<iostream>
using namespace std;

 main()
 {
     int i,k,w,s=0,n;
     cin>>k>>n>>w;
     for(i=1;i<=w;i++)
     {
         s+=i*k;
     }
     if(s<n)
     cout<<'0';
     else
     {
         cout<<s-n;
     }
 }