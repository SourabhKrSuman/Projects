#include<iostream>
using namespace std;

 main()
 {
     int n,o=0,to=0,th=0,min,i,c=0,j;
     cin>>n;
     int a[n];
     for(i=0;i<n;i++)
     cin>>a[i];
     for(i=0;i<n;i++)
     {
         if(a[i]==1)
         o++;
         if(a[i]==2)
         to++;
         if(a[i]==3)
         th++;
     }
     min=o<to?o:to<th?to:th;
     cout<<min<<'\n';
     /*for(j=1;j<=min;j++)
     {
         for(i=0;i<n;i++)
         {
             if(a[i]==1||a[i]==2||a[i]==3)
             {
                 c++;
                 cout<<i+1<<' ';
             }
             if(c>3)
             cout<<'\n';
             break;    
         }
     }*/
 }