#include<iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
};
 int main(){
     Student s1;
     s1.name="rabia";
     s1.rollno=27;
     
     Student s2;
     s2.name="fatima";
     s2.rollno=29;
     
     cout<<s1.name<<" "<<s1.rollno<<" "<<endl;
     cout<<s2.name<<" "<<s2.rollno<<" "<<endl;
   
   return 0;
 }
