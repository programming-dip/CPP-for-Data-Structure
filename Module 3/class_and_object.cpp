#include <bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;
};
int main()
{
    Student bunon;
    bunon.roll =3;
    bunon.cls =9;
    bunon.section = 'A';
    char nm[100] ="Bunon Sutradhar";
    strcpy(bunon.name, nm);

    Student anudip;
    anudip.roll=9;
    anudip.cls=9;
    anudip.section='C';
    char nm2[100]="Anudip Bhoumik";
    strcpy(anudip.name, nm2);

    cout<<bunon.name;
    return 0;
}