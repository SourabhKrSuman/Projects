#include<bits/stdc++.h>
using namespace std;

 main()
{
	char a[101];
	char b[101];
	cin >> a;
	cin >> b;
	for (int i = 0; i < strlen(a); i++)
	{
		if (a[i] != b[i])
		{
			cout << 1;
		}
		else { cout << 0;}
	}
}