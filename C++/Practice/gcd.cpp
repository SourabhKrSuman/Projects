/*include<bits/stdc++.h>
using namespace std;

 main()
 {
  int n1, n2;

  cout << "Enter two numbers: ";
  cin >> n1 >> n2;
  
  while(n1 != n2) {
    if(n1 > n2)
      n1 -= n2;
    else
      n2 -= n1;
  }

  cout << "HCF = " << n1;
}*/



#include <iostream>
using namespace std;
int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

int main()
{
    int a = 98, b = 56;
    cout<<"GCD of "<<a<<" and "<<b<<" is "<<gcd(a, b);
    return 0;
}