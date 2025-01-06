#include<bits/stdc++.h>
using namespace std;

class Person
{
   public:
      char name[100];
      float height;
      int age;
      Person(char n[], float h, int a)
      {
         strcpy(name, n);
         height =h;
         age =a;
      }
};

int main()
{
   char nm1[100]="Bunon Bhoumik";
   Person bunon(nm1, 5.7, 21);

   char nm2[100]="Anudip Bhoumk";
   Person anudip(nm2,5.6,23);

   if(anudip.age>bunon.age)
   {
    cout<<anudip.name;
   }else
   {
    cout<<bunon.name;
   }
   
}
