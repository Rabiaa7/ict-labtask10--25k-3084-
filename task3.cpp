#include<iostream>
using namespace std;

class Patient{
  int age;
  string disease;
   
  public:
  void setage(int a){
      age=a;
  }
  int getage(){
      return age;
  }
  void setdisease(string d){
      disease=d;
  }
  string getdisease(){
      return disease;
  }
};
int main(){
    Patient p;
    p.setage(70);
    p.setdisease("heart disease");
    
    cout<<p.getage()<<" "<<p.getdisease()<<" "<<endl;
    return 0;
}
