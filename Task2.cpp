#include<iostream>
using namespace std;

class Book{
    float price;
    public:
    string title;
    void setprice(float a){
        price=a;
    }
    float getprice(){
        return price;
    }
    
};
int main(){
    Book b1;
    b1.title="Alice in Wonderland";
    b1.setprice(120);
    
    cout<<b1.title<<" "<<b1.getprice()<<" "<<endl;
    return 0;
}
