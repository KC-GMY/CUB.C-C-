/* CH-230-A
minheritance2.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include<iostream>
using namespace std;
 
class A{
	int x;
	public:
		A(int i){x=i;}
		void print(){cout<<x;}
};
class B:virtual public A{
	public:
		B():A(10){}
};
class C:virtual public A{
	public:
		C():A(10){}
};
class D:public B,public C{
	public:
	//there is no matching function to D{}
	//the candidate expect 1 argument but there's 0 provided
	D():A(0){}
	//we added ':A(10)' then x will be 0 and will be printed on the screen
};

int main(){
    D d; 
    d.print(); //outputs 0
    return 0;
}