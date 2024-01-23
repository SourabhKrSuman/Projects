#include<bits/stdc++.h>
using namespace std;

void even(int n)
{
    cout<<"Even: ";
    for(int i=1;i<=n;i++)
    {
        if(int(i&1) ==0)
        cout<<i<<' ';
    }
    cout<<endl;
}
void odd(int n)
{
    cout<<"Odd: ";
    for(int i=1;i<=n;i++)
    {
        if(i&1)
        cout<<i<<' ';
    }
}
main()
{
    int size;
    cout<<"Enter the nth term: ";
    cin>>size;
    even(size);
    odd(size);
}