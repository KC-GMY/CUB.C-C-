/* CH-230-A
Assignment 13.6.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
#include <vector>

using namespace std;

int main(){
 //initializing the vector with 20 elements, all set to 8
 vector<int> num;
 for(int i=0;i<20;i++){ 
  num.push_back(8);
 }
 try{
  //attempt to access the 21st position (index 20)
  cout<<"The number at the 21st position is: "<<num.at(21)<<endl;
 }
 catch(const out_of_range& a){
  //catching the out_of_range exception and writing it on the screen
  cerr<<"Error: "<<a.what();
 }
 return 0;
}