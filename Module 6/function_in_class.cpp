#include<bits/stdc++.h>
using namespace std;

class Person
{
    public:
        string name;
        int age,mark1,mark2;

        Person(string nm, int ag,int mk1, int mk2)
        {
            name=nm;
            age=ag;
            mark1=mk1;
            mark2=mk2;
        }

        void hello()
        {
            cout<<"Hello "<<name<<" "<<age<<endl;
        }

        int total_marks()
        {
            return mark1+mark2;
        }
};

int main()
{

    Person abul("Abul Kabul",23,80,81);
    abul.hello();
    cout<<"You got "<<abul.total_marks()<<" marks taotal"<<endl;
    
    return 0;
}