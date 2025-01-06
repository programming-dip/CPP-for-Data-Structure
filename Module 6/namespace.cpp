#include <bits/stdc++.h>
using namespace std;

namespace anudip
{
    int age=23;
    void hello()
    {
        cout<<"Anudip Namespace"<<endl;
    }
}

namespace ayon
{
    int age =24;

    void hello()
    {
        cout<<"Ayon Namespace"<<endl;
    }
}

int main()
{

    using namespace anudip;
    cout<<age<<endl;
    hello();
    cout<<ayon::age<<endl;
    ayon::hello();
    return 0;
}