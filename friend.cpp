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
    friend void print_a(equilateralTri);
};

class trifunctions{
public:
void printresult(equilateralTri e){
cout<<"circumference is : "<<e.circum<<endl;
cout<<"area is : "<<e.area<<endl;
}
};
void print_a(equilateralTri e){
cout<<"\nGiven side  is : "<<e.a<<endl;
}

main(){
    equilateralTri e1;
    trifunctions t;
    e1.setA(5);
    print_a(e1);
    t.printresult(e1); 

}
