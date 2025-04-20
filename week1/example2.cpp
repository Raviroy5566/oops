#include<iostream>
#include<cmath>
using namespace std;
class GeometryCalculator{
     public:
     static double CalRectangleArea(double length,double width){
        return length*width;
     }
     static double CalParameterOfRectangle(double lenght,double width){
        return 2*(lenght+width);
     }
     static double CalAreaOfCircle(double radious){
        return M_PI*radious*radious;
     }
     static double CalCircleOfCircumtances(double radious){
        return 2*M_PI*radious;
     }
     static double CalAreaOfTriangle(double sideA,double sideB ,double sideC){
         double s = (sideA+sideB+sideC);
         return sqrt(s*(s-sideA)*(s-sideB)*(s-sideC));
     }
};
int main()
{ 
    double length =5.0;
    double width = 3.0;
    double radious = 4.0;
    double sideA = 7.0;
    double sideB= 24.0;
    double sideC = 25.0;

    GeometryCalculator g1;
    cout<<"Area of Rectangle "<<g1.CalRectangleArea(length,width)<<endl;
    cout<<"parameter of Rectangle "<<g1.CalParameterOfRectangle(length,width)<<endl;
    cout<<"Area of circle "<<g1.CalAreaOfCircle(radious)<<endl;
    cout<<"Circumtance of circle "<<g1.CalCircleOfCircumtances(radious)<<endl;
    cout<<"Area of Triangle "<<g1.CalAreaOfTriangle( sideA,sideB,sideC)<<endl;

    return 0;
}