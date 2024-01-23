#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,c=0;
    string s;
    cin>>s;
    for(i=0;i<s.size();i++)
    {
        if(s[i]<91)
        c++;
    }
    if((i-c)==c||(i-c)>c)
    {
    transform(s.begin(), s.end(), s.begin(),::tolower);
    cout<<s;
    }
    else
    {
    transform(s.begin(), s.end(), s.begin(),::toupper);
    cout<<s;
    }
}