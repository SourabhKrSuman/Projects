#include<bits/stdc++.h>
using namespace std;

int main()
 {
     int i,max,min,n,c=0;
     cin>>n;
     int ar[n];
     for(i=0;i<n;i++)
     {
         cin>>ar[i];
     }
     min=max=ar[0];
     for(i=0;i<n;i++)
     {
         if(min>ar[i+1]&&(i+1)<n)
         {
             min=ar[i+1];
             c++;
         }
         if(max<ar[i+1]&&(i+1)<n)
         {
             max=ar[i+1];
             c++;
         }
     }
     cout<<c;
     return 0;
 }