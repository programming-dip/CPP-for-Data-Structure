#include<iostream>
#include <algorithm>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;
    int mn=min(a,b);
    int mx=max(a,b);
    cout<<"min: "<<mn<<endl<<"max: "<<mx<<endl;
    return 0;
}