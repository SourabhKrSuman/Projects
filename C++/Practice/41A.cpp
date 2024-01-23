#include<bits/stdc++.h>
using namespace std;

main()
{
    int c=0,i;
    char s[101];
    char t[101];
    cin>>s;
    cin>>t;
    int l=strlen(s);
    for(i=0;i<l;i++)
    {
        if(s[i]==t[l-1-i])
        c++;
    }
    if(c==l)
    cout<<"YES";
    else
    {
        cout<<"NO";
    }
}