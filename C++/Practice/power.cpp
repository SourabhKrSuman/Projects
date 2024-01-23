#include <iostream>
using namespace std;
 
 int power(int x, unsigned int y) 
 {   
     int temp; 
     if( y == 0)
     return 1;
     temp = power(x, y/2); 
     if (y%2 == 0)
     return temp*temp; 
     else
     return x*temp*temp;
 }

int main()
{
    int x,y;
    cout<<"Enter a no: ";
    cin>>x;
    cout<<"Enter the power: ";
    cin>>y;
    cout <<power(x, y);
}




/*#include <iostream>
#include <cmath>
 
using namespace std;
 
int main() {
    int base, exp;
 
    cout << "Enter base and exponent\n";
    cin >> base >> exp;
 
    cout << base << "^" << exp << " = " << pow(base, exp);
    return 0;
}*/