#include<bits/stdc++.h>
using namespace std;
class Student
{
    public:
        char name[100];
        int roll;
        int cls;
        char section;

        Student(int r,int c,char s, char n[])
        {
            roll=r;
            cls=c;
            section=s;
            strcpy(name,n);
        }

};
int main()
{
    Student bunon(3,9,'A',"Bunon Sutradhar");
    cout<<bunon.name<<endl;
    cout<<bunon.roll<<endl;
    cout<<bunon.cls<<endl;
    cout<<bunon.section<<endl;
    return 0;
}