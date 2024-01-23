#include<bits/stdc++.h>
using namespace std;

main()
{
    int t,i;
    cin>>t;
    while(t--)
    {
        string st=" ";
        cin>>st;
        for(i=0;i<st.size()-1;i+=2)
        {
           
            cout<<st[i];
        }
        cout<<st[i-1]<<'\n';
    }
}
