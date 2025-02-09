/* CH-230-A
Assignment 13.8.cpp
Omar Benmoussa
obenmoussa@constructor.university */

//!!!!!!!!!!!!!!!!!!!!!!!!!!!!
#include <iostream>
#include <exception>
using namespace std;

//Motor class with a empty constructor throwing a string exception
class Motor{
 public:
 Motor(){
   throw "This motor has problems";
 }
};

//Car empty constr. trying  Motor empty constructor, catching the exception
class Car{
 public:
 Car(){
  try{
  Motor motor;
  }
  catch(const char* str){
  throw str;
  }
 }
};

//Garage empty constr. tries Car empty constr., catches a string exceptions
//throws another string exception
class Garage{
 public:
 Garage() try : car(){
  }
  catch(const char* str){
   throw "The car in this garage has problems with the motor";
  }
 private:
 Car car;
};

int main(){
 //trying the empty constructor for a garage object
 try{
 Garage garage;
 }
 //catching the string exception and printing it
 catch(const char* msg){
  cerr<<msg;
 }
 return 0;
}