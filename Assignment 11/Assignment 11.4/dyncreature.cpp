/* CH-230-A
dyncreature.cpp
Omar Benmoussa
obenmoussa@constructor.university*/

#include "Creature.h"

using namespace std;

int main (){
    string creature;
    do{
     cout<<"Enter a creature name or ""quit"" to quit: "<<endl;
     getline(cin,creature);
     if(creature=="wizard"){
        Wizard *p_w=new Wizard();
        if(p_w==nullptr){
            cout<<"The memory allocation wasn't successfull";
            exit(1);
        }
        cout << "Creating a Wizard." << endl;
        p_w->run();
        p_w->hover();
        delete p_w;
        }
     else if(creature=="object1"){
        Warden *p_wa=new Warden;
        if(p_wa==nullptr){
            cout<<"The memory allocation wasn't successfull";
            exit(1);
        }
        cout<<"Creating a Warden."<<endl;
        p_wa->run();
        p_wa->oneshot();
        delete p_wa;
        }
     else if(creature=="object2"){
        Nashor *p_n=new Nashor;
        if(p_n==nullptr){
            cout<<"The memory allocation wasn't successfull";
            exit(1);
        }
        cout<<"Creating a Nashor."<<endl;
        p_n->run();
        p_n->airborn();
        delete p_n;
        }
    }while(creature!="quit");
    return 0;
}