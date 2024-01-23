#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int t;
     cin>>t;
     while(t--)
     {
         int a,b;
         cin>>a>>b;
         int mn=min(a,b);
         int mx=max(a,b); 
         if(mn*2>=mx)
         cout<<(2*mn)*(2*mn)<<'\n';
         else
         cout<<mx*mx<<'\n';

     }
 }
