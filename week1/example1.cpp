#include<iostream>
using namespace std;
class Employee{
    public:
    int id;
    string name;
    float salary;
    void insert(int i,string n, float s){
        id=i;
        name =n;
        salary = s;
    }
    void display(){
        cout<<id<<" "<<name<<" "<<salary<<endl;
    }
};
int main()
{
    Employee e1;
    Employee e2;
    e1.insert(8,"Raja",50000);
    e2.insert(10,"Manoj",75000);
    e1.display();
    e2.display();

return 0;
}