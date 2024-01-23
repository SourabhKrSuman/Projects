//Armstrong no. from 1 to n(n is entered by user)
#include<iostream>
using namespace std;

main()
{
    int lim,a,i,arm=0,d;
    cout<<"Enter the upper limit:";
    cin>>lim;
    for(i=1;i<lim;i++)
    {
        a=i;
        arm=0;
        while(a>0)
        {
            d=a%10;
            arm=arm+d*d*d;
            a=a/10;
        }
        if(arm==i)
            cout<<i<<"  ";
    }
}
