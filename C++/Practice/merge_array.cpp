#include <bits/stdc++.h>
using namespace std;

vector<int> merge(vector<int> nums1, int n, vector<int> nums2, int m)
{
    int i = n - 1;
    int j = m - 1;
    int k = m + n - 1;
    nums1.resize(k+1);
    while (i >= 0 && j >= 0)
    {
        if (nums1[i] > nums2[j])
            nums1[k--] = nums1[i--];
        else
            nums1[k--] = nums2[j--];
    }
    while (j >= 0)
    {
        nums1[k--] = nums2[j--];
    }
    while (i >= 0)
    {
        nums1[k--] = nums1[i--];
    }
    return nums1;
}

void print(vector<int> v)
{
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << ' ';
}

main()
{
    vector<int> num1;
    vector<int> num2;
    num1.push_back(2);
    num1.push_back(4);
    num1.push_back(6);
    num1.push_back(8);
    num2.push_back(2);
    num2.push_back(3);
    num2.push_back(5);
    cout << "Merged vector is: ";
    vector<int> ans = merge(num1, 4, num2, 3);
    print(ans);
}