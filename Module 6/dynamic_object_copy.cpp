#include <bits/stdc++.h>
using namespace std;
class Person
{
    public:
        string name;
        int age;

        Person(string name, int age)
        {
            this->name=name;
            this->age = age;
        }
};
int main()
{

    Person * sakib=new Person("Sakib Hassan",25);
    Person * rakib=new Person("Rakib Hasan",23);

    // rakib = sakib;
    // rakib->name = sakib->name;
    // rakib->age = sakib->age;
    *rakib = *sakib;
    delete sakib;
    cout<<rakib->name<<" "<<rakib->age<<endl;
    return 0;
}