#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int n,i,j,c=0;
     cin>>n;
     char ch[n];
     cin>>ch;
     for(i=0;i<strlen(ch);i++)
     {
         ch[i]=tolower(ch[i]);
     }
     for(i=97;i<123;i++)
     {
         for(j=0;j<strlen(ch);j++)
         {
             if(ch[j]==i)
             {
                 c++;
                 break;
             }
         }
     }
     if(c==26)
     cout<<"YES";
     else
     {
         cout<<"NO";
     }
 }