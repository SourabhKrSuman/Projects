#include<iostream>
using namespace std;
main()
{
    int n,row = 1;
    cout<<"Enter no. of rows: ";
    cin>>n;
    while(row <= n)
    {
        int space = 1;
        while( space <= row - 1)
        {
            cout<<' ';
            space ++;
        }
        int coln = n;
        int ln = row;
        while(coln >= row)
        {
            cout<<ln;
            ln ++;
            coln --;
        }
        row ++;
        cout<<endl;
    }
        /*int j=1;
        int ch='A';
        ch += i - 1;
        //int col = i;
        while(j <= i)
        {
            cout<<char(ch)<<' ';,
            //col++;
            ch += 1;
            j += 1;
        }
        cout<<endl; 
        
        i += 1;*/
}