#include <bits/stdc++.h>
using namespace std;

class Person
{
    public:
        char name[100];
        float height;
        int age;

        Person(char nm[], float h, int a)
        {
            strcpy(name, nm);
            height =h;
            age = a;
        }
};

Person getDet()
{
    char nm1[100]="Anudip Bhoumik";
    Person a(nm1,5.5,22);
    return a;
}

int main()
{

    
    Person  Anudip =getDet();
    cout<<Anudip.age;

    return 0;
}