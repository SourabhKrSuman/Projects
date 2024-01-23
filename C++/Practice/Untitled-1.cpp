/*#include<bits/stdc++.h>
using namespace std;

int main()
{
    return 0;
}*/
#include<iostream>
using namespace std;

string a = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890 ";
string b = "zyxwvutsrqponmlkjihgfedcbaZYXWVTSRQPONMLKJIHGFEDCBA_";
void encrypt(string& s)
{
    for (int i = 0; s[i] != '\0'; i++)
    {
        char ch = s[i];
        int p = a.find(ch);
        s[i] = b.at(p);
    }
    cout << "Your Encrypted Text: " << s << "\n";
}

int main()
{
    string s;
    cout << "Enter Plain Text: ";
    getline(cin,s);
    encrypt(s);
    return 0;
}