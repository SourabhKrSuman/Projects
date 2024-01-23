#include<iostream>
using namespace std;
 main()
 {
     int n,k,i,ar[50],c=0;
     cin>>n;
     cin>>k;
     for(i=0;i<n;i++)
     {
         cin>>ar[i];
     }
     for(i=0;i<n;i++)
     {
         if(ar[i]>=ar[k-1]&&ar[i]>0)
         c++;
     }
     cout<<c;
 }