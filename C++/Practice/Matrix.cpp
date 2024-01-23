//A matrix program
#include<iostream>
using namespace std;

main()
{
    int n,i,j;
    cout<<"Enter order of matrix: ";
    cin>>n;
    int ar[n][n];
    for(i=0;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            ar[i][j]=1;
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=0;j<1;j++)
        {
            ar[i][j]=1;
        }
    }
    for(i=1;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            ar[i][j]=ar[i][j-1]+ar[i-1][j];
        }
    }
    cout<<"\nThe matrix formed is:\n";
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cout<<ar[i][j]<<"\t";
        }
        cout<<"\n";
    }
    cout<<"The greatest no. from the matrix is: "<<ar[n-1][n-1];
}
