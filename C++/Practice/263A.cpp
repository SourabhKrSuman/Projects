#include<bits/stdc++.h>
using namespace std;

 main()
 {
     int i,j,ar[5][5],x,y;
     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             cin>>ar[i][j];
         }
     }
     for(i=0;i<5;i++)
     {
         for(j=0;j<5;j++)
         {
             if(ar[i][j]==1)
             {
                 cout<<abs(2-i)+abs(2-j);
                 break;
             }
         }
     }
 }