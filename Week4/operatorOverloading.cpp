#include<iostream>
using namespace std;
class Test {
    private:
    int num;
    public:
    Test()
    {num=8;}
    void operator++(){
        num =num+2;
    }
    void print (){
        cout<<"the count is : "<<num;
    }
};

int main()
{
    Test tt;
    ++tt;
    tt.print();
    return 0;
}