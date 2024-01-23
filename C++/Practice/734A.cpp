#include<bits/stdc++.h>
using namespace std;

main()
{
    int n,a=0,d=0;
    char ch[100001];
    cin>>n>>ch;
    while(n--)
    {
        if(ch[n]=='A')
        a++;
        else
        if(ch[n]=='D')
        d++;
    }
        if(a>d)
        cout<<"Anton";
        else
        if(a==d)
        cout<<"Friendship";
        else
        {
             cout<<"Danik";
        }
}