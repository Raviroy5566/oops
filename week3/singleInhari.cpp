#include<iostream> 
using namespace std;
class Animal{
    public:
    void eat(){
        cout<<"Animal is eating"<<endl;
    }
};

class Dog : public Animal{
    public:
    void bark(){
        cout<<"Dog is barkng."<<endl;
    }
};
int main()
{ 
    Dog Mydog;
    Mydog.eat();
    Mydog.bark();
return 0;
}