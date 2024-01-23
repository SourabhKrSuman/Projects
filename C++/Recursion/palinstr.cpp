#include <bits/stdc++.h>
using namespace std;

bool chekpalin(string s,int i,int sz)
{
    if(i > sz-1-i){
        return true;
    }
    if(s[i] != s[sz-i-1])
    return false;
    else{
    return chekpalin(s, i+1,sz);
    }
}

main()
{
    string s;
    //cout << siz;
    cin >> s;
    cout<<chekpalin(s,0,s.length())<<endl;
}