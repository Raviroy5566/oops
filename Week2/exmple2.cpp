//write a c++ program to multiple two complex number  using class and objects

#include<iostream>
using namespace std;
class complex{
    float real ;
    float image;

    public:
    void setvalue(float r ,float i){
        real =r;
        image =i;
    }

    static complex Multiply(const complex&c1,const complex&c2){
        complex result;
        result.real = c1.real*c2.real - c1.image*c2.image;
        result.image = c1.real*c2.image + c2.real*c1.image;
        return result;
    }

    void display(){
        if(image>=0){
            cout<<real<<"+"<<image<<"i"<<endl;
        }else{
            cout<<real<<"-"<<image<<"i"<<endl;
        }
    }
};
int main()
{   complex result,c1,c2;
    float real1,image1,real2,image2;

    cout<<"enter real and imaginary part of first comlex number:";
    cin>>real1>>image1;

    c1.setvalue(real1,image1);

    cout<<"enter real and imaginary part of second complex number :";
    cin>>real2>>image2;

    c2.setvalue(real2,image2);

    result = complex::Multiply(c1,c2);
    cout<<"result of multiplication :";

    result.display();
return 0;
}