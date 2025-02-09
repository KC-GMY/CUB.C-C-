#include <iostream>

using namespace std;

class Creature {
    protected:
		int distance;

	public:
		Creature();  
        Creature(int);
		void run() const;
        ~Creature();
};

Creature::Creature(): distance(10) {
    cout << "Creature constructor called" << endl;
}
Creature::Creature(int x): distance(x) {
     cout << "Creature constructor" << endl;
}
void Creature::run() const { 
    cout << "running " << distance << " meters!\n";
}  
//creature destructor
Creature::~Creature(){
 cout<<"Destructor constructor called."<<endl;
}
class Wizard : public Creature {
    private:
		int distFactor;

	public:
		Wizard();
		void hover() const;
};

Wizard::Wizard() : Creature(10), distFactor(3) {
    cout << "Wizard constructor called" << endl;
}  

void Wizard::hover() const {
    cout << "hovering " << (distFactor * distance) << " meters!\n";
}

//new class derived from the Creature class: Warden
//a new property: size and new method: oneshot
class Warden: public Creature{
    private:
    int size;
    public:
    void oneshot(){
        cout<<"You got oneshotted"<<endl;
    }
};

//new class derived from the Creature class: Nashor
//a new property: HP and new method: airborn
class Nashor: public Creature{
    private:
    int HP;
    public:
    void airborn(){
        cout<<"You are airborn!!"<<endl;
    }
};

int main() { 
    cout << "Creating a Creature." << endl;
    Creature c(25);
    c.run();
    //c.hover();

    cout << "Creating a Wizard." << endl;
    Wizard w;
    w.run();
    w.hover();

    cout<<"Creating a Warden."<<endl;
    Warden wa;
    wa.run();
    wa.oneshot();

    cout<<"Creating a Nashor."<<endl;
    Nashor n;
    n.run();
    n.airborn();
    
    return 0;
} 