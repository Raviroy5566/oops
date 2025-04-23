#include<iostream>
using namespace std;
class Distance{
   private:
   int meter;
   int centimeter;

   public:
   void getdistance(){
       cout<<"enter meter :";
       cin>>meter;
       cout<<"enter centimeter";
       cin>>centimeter;
   }
   void displayDistance(){
    cout<<"distance :"<<meter<<"meter"<<centimeter<<"centimeter"<<endl;
   }
    Distance addistance(const Distance& d1,const Distance& d2){
        Distance result;
        result.meter = d1.meter + d2.meter;
        result.centimeter = d1.centimeter + d2.centimeter;

        if(result.centimeter>=100){
            result.meter+=result.centimeter/100;
            result.centimeter+=result.centimeter%100;
        }
        return result;
    }
};

int main()
{
     Distance distance1,distance2, result;

    cout<<"enter the first distance :"<<endl;
    distance1.getdistance();

    cout<<"enter the second distance :"<<endl;
    distance2.getdistance();

    result = result.addistance(distance1,distance2);
    cout<<"sum of the distance"<<endl;
    result.displayDistance();
return 0;
}