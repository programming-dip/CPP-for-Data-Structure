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
            roll = r;
            cls = c;
            section = s;
        }
};

Student fun()
{
    char name[100]= "Bunon Sutradhar";
    Student b(name, 3, 9, 'A');
    return b;
}

int main()
{
    Student bunon= fun();

    cout<<bunon.name<<endl;
    cout<<bunon.roll<<endl;
    cout<<bunon.cls<<endl;
    cout<<bunon.section<<endl;

    return 0;
}