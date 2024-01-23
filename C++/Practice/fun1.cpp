#include<bits/stdc++.h>
using namespace std;

int ap()
{
    int num;
    cout<<"Enter the nt term: ";
    cin>>num;
    return 3*num+7;
}

int main()
{
    int num,ans;
    ans= ap();
    cout<<"Answer of A.P is: "<<ans<<endl;
    cout<<"Answer of A.P is: "<<ap()<<endl;
    return 0;
}