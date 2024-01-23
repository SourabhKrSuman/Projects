#include<bits/stdc++.h>
using namespace std;
void toha(int n,char fromtow,char usetow,char totow)
{
    if(n==1)
    {
        cout<<"Move disk 1 from peg "<<fromtow<<" to peg "<<totow<<'\n';
        return;
    }
    toha(n-1,fromtow,usetow,totow) ;
    cout<<"Move disk "<<n<<" from peg "<<fromtow<<" to peg "<<totow<<'\n';
    toha(n-1,usetow,totow,fromtow);
}
main()
{
    int dsk;
    cout<<"Enter no of disks: ";
    cin>>dsk;
    toha(dsk,'A','B','C');
}