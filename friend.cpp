#include<iostream>
using namespace std;

class equilateralTri{
    float a;
    float circum;
    float area;
    public:
    void setA(float l){ 
        a=l;
        circum=a*3;
        area=(1.73*a*a)/4;
    }
    friend class trifunctions;
};

class trifunctions{
public:
void printresult(equilateralTri e){
cout<<"circumference is : "<<e.circum<<endl;
cout<<"area is : "<<e.area<<endl;
}
};

main(){
    equilateralTri e1;
    trifunctions t;
    e1.setA(5);
    t.printresult(e1); 

}