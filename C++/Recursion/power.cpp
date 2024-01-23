#include <bits/stdc++.h>
using namespace std;

int power(int base,int pow)
{
    if(pow==0)
        return 1;
    if(pow==1)
        return base;

    int ans = power(base, pow/2);

    if(pow%2==0){
        return ans * ans;}
    else{
        return base * ans * ans;}
}

main()
{
    int bse, pw;
    cin >> bse >> pw;
    cout<<power(bse, pw);
}