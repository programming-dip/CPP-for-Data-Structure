// https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/H
#include <bits/stdc++.h>
using namespace std;

int *sort(int * a,int n)
{

    
    int temp;
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[i])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    return a;

}

int main()
{
    int n;
    cin>>n;
    int *a= new int[n];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }

    int *b= sort(a,n);

    for(int i=0;i<n;i++)
    {
        cout<<b[i]<<" ";
    }
    return 0;
}