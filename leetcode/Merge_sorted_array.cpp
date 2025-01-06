#include<bits/stdc++.h>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int nums1[m],nums2[n],c[m+n];
    for(int i=0;i<m;i++)
    {
        cin>>nums1[i];
    }

    for(int i=0;i<n;i++)
    {
        cin>>=nums2[i];
    }


    for(int i=0;i<m+n;i++)
    {
        if(i<m) c[i] = nums1[i];
        if(i>=m) c[i] = nums2[i-m];
    }

    sort(c,c+m+n);

    for(int i=0;i<m+n;i++)
    {
        cout<<c[i]<<" ";
    }

    
    return 0;
}