#include<bits/stdc++.h>
using namespace std;

class Student
{
    public:
        string nm;
        int cls;
        char s;
        int id;
        int mathMarks;
        int engMarks;

};

bool cmp(Student a, Student b)
{
    if(a.mathMarks+a.engMarks>b.mathMarks+b.engMarks)
    {
        return true;
    } else if (a.mathMarks+a.engMarks==b.mathMarks+b.engMarks)
    {
        if(a.id<b.id) {return true;}
        else return false;
    } else return false;
}

int main()
{
    int n;
    cin>>n;
    Student a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i].nm>>a[i].cls>>a[i].s>>a[i].id>>a[i].mathMarks>>a[i].engMarks;

    }

    sort(a,a+n,cmp);

    for(int i=0;i<n;i++)
    {
        cout<<a[i].nm<<" "<<a[i].cls<<" "<<a[i].s<<" "<<a[i].id<<" "<<a[i].mathMarks<<" "<<a[i].engMarks<<endl;

    }

    return 0;
}