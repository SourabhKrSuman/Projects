#include<iostream>
using namespace std;

 main()
 {
     int x=0,n;
     string s;
     cin>>n;
     while(n--)
     {
         cin>>s;
         if(s[0]=='+'&&s[1]=='+')
         ++x;
         else
         if(s[0]=='-'&&s[1]=='-') 
         --x;
         else
         if(s[2]=='+')
         x++;
         else
         x--;   
     }
     cout<<x;
 }