#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
	    char name[100];
	    int roll;
	    char section;
	    int math_marks;
	    int cls;

        Student(char n[],int r, char s, int mm, int c)
        {
            strcpy(name, n);
            roll =r;
            section =s;
            math_marks =mm;
            cls =c;
        }
};

int main()
{
    char s1Name[100]= "Rahim Uddin";
    Student rahim(s1Name,1,'A',86,9);
    
    char s2Name[100]= "Karim Uddin";
    Student karim(s2Name,2,'A',80,9);
    
    char s3Name[100]= "Solim Uddin";
    Student solim(s3Name,3,'A',95,9);
    
    int mxMark = max(rahim.math_marks, max(karim.math_marks, solim.math_marks));

    if(rahim.math_marks==mxMark) cout<<rahim.name;
    if(karim.math_marks==mxMark) cout<<karim.name;
    if(solim.math_marks==mxMark) cout<<solim.name;

    return 0;
}