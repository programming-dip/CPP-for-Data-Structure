#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(char n[], int r, int c, char s)
        {
            strcpy(name,n);
            roll=r;
            cls=c;
            section=s;
        }
};
int main()
{
    char name[100]="Bunon Sutrashar";
    Student * bunon = new Student(name,3,9,'A');
    cout<<bunon->name<<endl;
    cout<<bunon->cls<<endl;
    cout<<bunon->roll<<endl;
    cout<<bunon->section<<endl;

    delete bunon;

    cout<<bunon->name<<endl;
    cout<<bunon->cls<<endl;
    cout<<bunon->roll<<endl;
    cout<<bunon->section<<endl;
    return 0;
}