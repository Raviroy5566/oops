#include<iostream>
using namespace std;
class Person{
    private:
    int age;
    public:
    Person()
    {
        age =17;
    }
    Person(int a){
     age = a;
    }
    int getAge(){
        return age;
    }
};
int main()
{
    Person p1,p2(48);
    cout<<"person1 age "<<p1.getAge()<<endl;
    cout <<"person2 age "<<p2.getAge()<<endl;
return 0;
}