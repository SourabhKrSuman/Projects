#include<bits/stdc++.h>
using namespace std;

main()
{
    int t, n, i;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int a[n], b[n];
        long long int s = 0;
        for (i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        int mia = *min_element(a, a + n);
        int mib = *min_element(b, b + n);
        // cout<<mia<<' '<<mib<<'\n';
        /*int mia=a[0];
        int mib=b[0];
        for(i=0;i<n;i++)
         {
             if(a[i]<=mia)
             mia=a[i];
             else
             mia=mia;
         }
        for(i=0;i<n;i++)
         {
             if(b[i]<=mib)
             mib=b[i];
             else
             mib=mib;
         }*/
         for(i=0;i<n;i++)
         {
             s+=max(a[i]-mia,b[i]-mib);
         }
         cout<<s<<'\n';

     }

 }