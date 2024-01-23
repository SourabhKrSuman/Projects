#include <bits/stdc++.h>
using namespace std;

bool is_subset_sum(int set[], int n, int target_sum)
{
bool sub_set[n + 1][target_sum + 1];
for (int i = 0; i <= n; i++)
sub_set[i][0] = true;
for (int i = 1; i <= target_sum; i++)
sub_set[0][i] = false;
for (int i = 1; i <= n; i++) {
for (int j = 1; j <= target_sum; j++) {
if (j < set[i - 1])
sub_set[i][j] = sub_set[i - 1][j];
if (j >= set[i - 1])
sub_set[i][j] = sub_set[i-1][j]|| sub_set[i - 1][j - set[i - 1]];
}
}
return sub_set[n][target_sum];
}

int main()
{
int set[] = {10, 7, 8, 4, 1, 6};
int target_sum = 16;
int n = sizeof(set) / sizeof(set[0]);
cout<<"Given set:"<<endl;
for (int i = 0; i <n; i++)
{
    cout<<set[i]<<' ';
}
cout<<endl;
if (is_subset_sum(set, n, target_sum) == true)
cout <<"Found a subset with given sum = "<<target_sum;
else 
cout <<"No subset found with given sum = "<<target_sum;
return 0;
}