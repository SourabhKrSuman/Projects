#include <bits/stdc++.h>
using namespace std;

// to check a string is palindrone or not excluding special char and case.
bool PalinString(string st)
{
    int s = 0;
    int e = st.length() - 1;
    while (s <= e)
    {
        while (!isalnum(st[s]))
        {
            s++;
        }
        while (!isalnum(st[e]))
        {
            e--;
        }
        if (tolower(st[s]) != tolower(st[e]))
            return false;
        else
        {
            s++;
            e--;
        }
    }
    return true;
}

//to reverse the word of string in place.
string RevWord(string st)
{
    string ans = "";
    st = " " + st;
    for (int i = 1; i <= st.length(); i++)
    {
        if (st[i] == ' ' || st[i] == '\0')
        {
            for (int j = i - 1; st[j] != ' '; j--)
            {
                ans.push_back(st[j]);
            }
            if (i < st.length())
                ans.push_back(' ');
        }
    }
    return ans;
}

//to reverse a string by swaping the word
string RevWord_2(string st)
{
    string ans_2 = "";
    st = " " + st;
    for (int i = st.length() - 1; i >= 0; i--)
    {
        if (st[i] == ' ')
        {
            for (int j = i + 1; st[j] != '\0' && st[j] != ' '; j++)
            {
                ans_2.push_back(st[j]);
            }
            if (i > 0)
                ans_2.push_back(' ');
        }
    }
    return ans_2;
}

// to revese a word in string withiout including extra space
string RevWord_3(string st)
{
    string ans3 = "";
    st = " " + st;
    int i = st.length() - 1;
    int j;
    while (i > 0)
    {
        if (st[i] == ' ')
        {
            i--;
            continue;
        }
        else
        {
            for (j = i; st[j] != ' '; j--)
            {
            }
            for (int k = j + 1; k <= i; k++)
                ans3.push_back(st[k]);
        }
        i = j;
        if (j > 0)
            ans3.push_back(' ');
    }
    if (ans3[ans3.length() - 1] == ' ')
    {
        ans3.resize(ans3.length() - 1);
        return ans3;
    }
    else
        return ans3;
}


main()
{
    string s;
    getline(cin, s);
    cout << RevWord(s) << endl;
    cout << RevWord_2(s) << endl;
    cout << RevWord_3(s) << endl;
    bool ans = PalinString(s);
    cout << ans;
}