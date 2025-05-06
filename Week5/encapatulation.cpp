#include<iostream>
using namespace std;
class Addar{
    public:
    Addar(int i=0){
        total = i;
    }
    void addnum(int number){
        total += number;
    }
    int getTotal() {
          return total;
    }
    private:
    int total;
};
int main()
{
    Addar a;
    a.addnum(10);
    a.addnum(20);
    cout<<"Total : "<<a.getTotal()<<endl;
return 0;
}