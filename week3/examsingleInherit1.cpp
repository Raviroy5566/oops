#include<iostream>
using namespace std;
class A{
    int a =5;
    int b =6;
    public:
    int mul(){
        int c =a*b;
        return c;
    }
};
class B : private A{
    public :
    void Display(){
        int result = mul();
        std::cout<<"Multiplication of a and b is : " <<result<<std::endl;
    }
};
int main()
{
    B b;
    b.Display();
return 0;
}