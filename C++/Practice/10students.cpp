#include<iostream>
using namespace std;

main()
{
    int i,j;
    int rol[10][10];
    string nam;
    for(i=0;i<1;i++)
    {
        for(j=i;j<10;j++)
        {
            cin>>nam[i][j];
            cin>>rol[i+1][j];
        }
    }
    for(i=0;i<1;i++)
    {
        for(j=i;j<10;j++)
        {
            cout<<"Name of "<<(j+1)<<" student is "<<nam[i][j] <<" & Roll no. :"<<rol[i+1][j];
        }
    }
}

    