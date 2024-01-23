#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int t,ans,n,i;
     cin>>t;
     while(t--)
     {
         cin>>n;
         int s[n];
         for(i=0;i<n;i++)
         cin>>s[i];
         sort(s,s+n);
         ans=s[n-1];
         for(i=1;i<n;i++)
         ans=min(ans,s[i]-s[i-1]);
         cout<<ans<<'\n';
     }
 }
