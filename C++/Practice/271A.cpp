#include<bits/stdc++.h>
using namespace std;
main()
{
	int a, b, c, d, y;
	cin>>y;
	for(int i = y + 1;y<=9000; i++)
	{
		a = i % 10;
		b = (i / 10) % 10;
		c = (i / 100) % 10;
		d = (i / 1000) % 10;
		if (a != b && b != c && c != d && a != c && b != d && a != d)
		{
			cout<< i << endl;
			break;
		}
	}
}