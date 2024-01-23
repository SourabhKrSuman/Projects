#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int c=0,n;
     cin>>n;
     string s;
     while(n--)
     {
        cin>>s;
        if(s[0]=='T')
        c+=4;
        else
        if(s[0]=='C')
         c+=6;
        else
        if(s[0]=='O')
        c+=8;
        else
        if(s[0]=='D')
        c+=12;
        else
        if(s[0]=='I')
        c+=20;
        s="";
     }
     cout<<c;
 }  