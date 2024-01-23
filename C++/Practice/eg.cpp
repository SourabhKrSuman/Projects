#include<iostream>
using namespace std;
 /*main()
 {
     int n,i,c=0;
     cout<<"Enter size of array:";
     cin>>n;
     int ar[n];
     cout<<"\nEnter elements of array:";
     for(i=0;i<n;i++)
     {
         cin>>ar[i];
     }
     for(i=0;i<n;i++)
     {
         if(ar[i]==ar[i+1])
         {
             ar[i]=ar[i]*2;
             ar[i+1]=0;
         }
     }
     for(i=0;i<n;i++)
     {
         if(ar[i]!=0)
         cout<<ar[i]<<' ';
         else
         c++;
     }
     for(i=1;i<=c;i++)
     {
          cout<<'0'<<' ';
     }
 }*/

/*#include<bits/stdc++.h>
using namespace std;
 main()
 {
    long double pw;
     pw=pow(4,99);
     cout<<pw;
 }*/
/*int uniqeMax(vector<int>ar)
{
    vector<int>cnt;
    for(int i:ar)
    {
        cnt[ar[i]]++;
    }
    return *max_element(cnt.begin(),cnt.end());
}*/

class Solution
{
public:
    int countGoodRectangles(vector<vector<int>> &rectangles)
    {
        int row = rectangles[0].size();
        int min, pos;
        vector<int> maxLen;
        //int coln=rectangles[0].size();
        for (int i = 0; i < row; i++)
        {
            int j = 0;
            maxLen.push_back(min(rectangles[i][j], rectangles[i][j + 1]));
        }
        vector<int> cnt;
        for (i = 0; i < maxLen.size(); i++)
        {
        cnt[[maxLen[i]]++;
        }
        for (i = 0; i < cnt.size(); i++)
        {
            if (min < cnt[i])
                ;
            {
                min = cnt[i];
                pos = i;
            }
        }
        return pos;
    }
}
}
;
