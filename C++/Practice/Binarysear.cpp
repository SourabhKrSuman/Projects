#include <iostream>
using namespace std;

main()
{
	int sze, i, arr[30], num, first, last, middle;
	cout<<"Enter the size of array:";
    cin>>sze;
    cout<<"Enter numbers in ascending order:";
	for (i=0; i<sze; i++)
	{
        cin>>arr[i];
	}
	cout<<"Enter the number that you want to search:";
    cin>>num;
	first = 0;
	last = sze-1;
	middle = (first+last)/2;
	while (first <= last)
	{
	   if(arr[middle] < num)
	   {
		first = middle + 1;
	   }
	   else if (arr[middle] == num)
	   {
		cout<<num<<" found in the array at the location "<<middle+1<<"\n";
                break;
           }
           else {
                last = middle - 1;
           }
           middle = (first + last)/2;
        }	
        if(first > last)
	{
	   cout<<num<<" not found in the array";
	}
}
