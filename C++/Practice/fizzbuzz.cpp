/*
#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        if(i%3==0&&i%5==0) //if(i%15==0)
        cout<<"fizzbuzz"<<"\n";
        else
        if(i%3==0)
        cout<<"fizz"<<"\n";
        else
        if(i%5==0)
        cout<<"buzz"<<"\n";
        else
        cout<<i<<"\n";
    }
}

#include<bits/stdc++.h>
using namespace std;

main()
{
    int i,c3=0,c5=0,n;
    string d="";
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c3++;
        c5++;
        d="";
        if(c3==3)
        {
            d+="fizz";
            c3=0;
        }
        if(c5==5)
        {
            d+="buzz";
            c5=0;
        }
        if(d=="")
        cout<<i<<"\n";
        else
        cout<<d<<"\n";
    }
}
*/

#include<bits/stdc++.h>
using namespace std;

main()
{
    int c2=0,od=0,ev=0,i,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {
        c2++;
        if(c2==2)
        {
            ev++;
            c2=0;
        }
        else
        od++;

    }
    cout<<ev<<'\n';
    cout<<od;
}