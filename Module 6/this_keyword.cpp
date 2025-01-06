#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age;
        Person(string name, int age)
        {
            this->name = name;
            this->age = age;

        }


        void hello()
        {
            cout<<"Hello "<<this->name<<endl;
        }
};

int main()
{
    Person abul("Abul Kabul",23);
    abul.hello();
    cout<<abul.age<<endl;
    return 0;
}