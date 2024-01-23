#include<bits/stdc++.h>
using namespace std;

string strep(string str, string str2)
{
    string ans = "";
    int str2_siz = str2.length();
    int str_siz = str.length();
    size_t found = str.find(str2);
    if (found != string::npos)
    {
        if(found==0 && found+str2_siz<str_siz)
            ans += str[found + str2_siz];
        else
        if(found >0 && found + str2_siz < str_siz)
        ans += str[found - 1] + str[found + str2_siz];
    }
    return ans;
}

main()
{
    string str ,str2;
    getline(cin, str);
    getline(cin, str2);
    cout << strep(str,str2);
}