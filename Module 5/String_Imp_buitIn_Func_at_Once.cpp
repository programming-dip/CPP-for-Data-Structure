#include<bits/stdc++.h>
using namespace std;

int main()
{
    // capacity functions
    string s;
    getline(cin,s);
    cout<<s.size()<<endl;
    cout<<s.max_size()<<endl;
    cout<<s.capacity()<<endl;
    s.clear();
    cout<<s<<endl;
    s.empty()==true? cout<<"Empty"<<endl:cout<<"Not Empty"<<endl;
    getline(cin,s);
    s.resize(3);
    cout<<s<<endl;

    // element access functions
    getline(cin,s);
    cout<<s[3]<<endl;
    cout<<s.back()<<endl;
    cout<<s.front()<<endl;


    // Modifiers
    string a;
    getline(cin,a);
    s+=a;
    cout<<s<<endl;
    s.push_back('0');
    cout<<s<<endl;
    s.pop_back();
    cout<<s<<endl;
    s.erase(3,1);
    cout<<s<<endl;

    getline(cin,s);
    s.replace(5, 0, " my ");
    cout<<s<<endl;

    getline(cin,s);
    s.insert(5," my ");
    cout<<s<<endl;




    // Iterators
    getline(cin,s);
    

    for(string:: iterator it=s.begin(); it<s.end(); it++)
    {
        cout<<*it<<endl;
    }
    return 0;
}