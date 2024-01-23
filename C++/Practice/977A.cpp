#include<iostream>
using namespace std;

 main()
 {
     int k,d,n;
     cin>>n>>k;
     while(k--)
     {
         d=n%10;
         if(d==0)
         n=n/10;
         else
         {
             n--;
         }
     }
     cout<<n;
 }