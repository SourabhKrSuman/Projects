#include<iostream>
using namespace std;
int main()
{
    int a,b,e;
    cout<<"Enter the value of a:";
    cin>>a;
    cout <<"\nEnter the value of b:";
    cin>>b;
    try
        {
        if (b!=0)
        cout<<"\nResult="<<(float)a/b;
        else
            {
            throw (e);
            }
        }
        catch (int i)
            {
            cout <<"\nException caught:Denominator can't be zero;Answer is infinite";
            }
return 0;
}
