/* CH-230-A
testHexagon.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Shapes.h"

int main(){
    Hexagon hx(9,"blue");
    Hexagon hv(15,"green");
    Hexagon hp(hv);
    cout<<"The Blue Hexagon perimeter is: "<< hx.perimeter()<<endl;
    cout<<"The Blue Hexagon area is: "<<hx.area()<<endl;
    cout<<"The Green Hexagon perimeter is: "<< hv.perimeter()<<endl;
    cout<<"The Green Hexagon area is: "<<hv.area()<<endl;
    cout<<"The Copy Hexagon perimeter is: "<< hp.perimeter()<<endl;
    cout<<"The Copy Hexagon area is: "<<hp.area()<<endl;
    return 0;
}