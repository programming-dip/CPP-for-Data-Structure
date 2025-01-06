#include <bits/stdc++.h>
using namespace std;
class Student 
{
    public:
        char name[100];
        int roll;
        char section;
        int math_marks;
        int cls;


        Student (char nm[], int r, char s, int mm, int c)
        {
            strcpy(name, nm);
            roll = r;
            section = s;
            math_marks = mm;
            cls = c;
        }
};

int main()
{
    char s1Name[100] = "Rahim Uddi";
    Student Rahim(s1Name,1,'A',82,9);
    char s2Name[100]="Karim Uddi";
    Student Karim(s2Name,2,'A',85,9);
    char s3Name[100]="Jodu Sam";
    Student Jodu(s3Name,3,'A',89,9);

    int mxMathMark = max(Rahim.math_marks, max(Karim.math_marks, Jodu.math_marks));

    if(Rahim.math_marks == mxMathMark) cout<<"Rahim";
    if(Karim.math_marks == mxMathMark) cout<<"Karim";
    if(Jodu.math_marks == mxMathMark) cout<<"Jodu";
    return 0;
}