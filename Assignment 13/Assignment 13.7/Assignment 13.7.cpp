/* CH-230-A
Assignment 13.7.cpp
Omar Benmoussa
obenmoussa@constructor.university */

#include <iostream>
#include <exception>

using namespace std;

//creating a child class of the exception
class OwnException: public exception{
 public:
 //constructor
 explicit OwnException(const char* str): msg(str){}
 //overwriting 'what()' method
 const char* what()const noexcept override{
  cout<<"OwnException\n";
  return msg;
 }
 //creating a new property defining the message of the exception
 private:
 const char* msg;
};

//receives an int and throws a type of exception depending on the int
void error(int a){
 if(a==1){
  throw 'a';//Throw char
 }
 else if(a==2){
  throw 12;//Throw int
 }
 else if(a==3){
  throw true;//Throw bool
 }
 else{
  throw OwnException("Default case exception");
 }
}

int main(){
 //declaring and reading an int from the user input
 int a;
 cout<<"Enter an integer: ";
 cin>>a;
 //try block calling the function
 try{
  error(a);
 }
 //catching an exception from the try block depending on the function
 //printing a different message accordingly
 catch(int &b){
  cout<<"Caught in main: "<<b;
 }
 catch(char &c){
  cout<<"Caught in main: "<<c;
 }
 catch(bool &d){
  cout<<"Caught in main: "<<d;
 }
 catch(const OwnException &e){
  cout<<"Caught in main: "<<e.what();
 }
 return 0;
}