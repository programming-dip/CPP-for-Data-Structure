#include <bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string name;
        int cls;
        char section;
        int math_marks;
        int eng_marks;


};

void revPrint(Student ar[], int n)
{
    
    for(int i=n-1;i>=0;i--)
    {
        cout<<ar[i].name<<" "<<ar[i].cls<<" "<<ar[i].section<<" "<<ar[i].math_marks<<" "<<ar[i].eng_marks<<endl;

    }
}

int main()
{
    int n;
    cin>>n;
    
    Student ar[n];
    for(int i=0;i<n;i++)
    {
        
        cin>>ar[i].name>>ar[i].cls>>ar[i].section>>ar[i].math_marks>>ar[i].eng_marks;
       
    }

    revPrint(ar,n);
    return 0;
}