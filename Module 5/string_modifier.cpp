#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a="Hello";
    string b="World";
    a=a+b;
    cout<<a<<endl;
    

    //b=b+"A";
    b.push_back('A');
    cout<<b<<endl;
    b.pop_back();
    cout<<b<<endl;
    b.pop_back();
    cout<<b<<endl;

    b.assign("Bunon");
    cout<<b<<endl;

    b="HelloWorld";
    cout<<b<<endl;
    
    b.erase(3,1);
    cout<<b<<endl;

    b="HelloWorld";
    b.erase(4,3);
    cout<<b<<endl;


    b="HelloWorld";
    b.replace(4,3,"SO");
    cout<<b<<endl;


    b="HelloWorld";
    b.replace(5,0,"SO");
    cout<<b<<endl;

    b="HelloWorld";
    b.insert(5,"SO");
    cout<<b<<endl;
    return 0;
}