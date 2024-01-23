#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int c=0,j,i;
     char s[1001];
     gets(s);
     for(i=97;i<123;i++)
     {
         for(j=0;s[j]!='}';j++)
         {
         if(s[j]==i)
         {
         c++;
         break;
         }
         }
     }
     cout<<c;

 }