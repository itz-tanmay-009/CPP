#include<iostream>
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal Eating";
    }
};

class B : public Animal{
    public:
    void m2(){
        cout<<"Function of class B";
    }
};

int main(){
    B obj;
    obj.eat();  // Function of class Animal
    obj.m2();   // Function of class B
    return 0;
}