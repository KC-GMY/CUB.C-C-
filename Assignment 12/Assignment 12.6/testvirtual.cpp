#include <iostream>
using namespace std;
#include "Area.h"
#include "Circle.h"
#include "Ring.h"
#include "Rectangle.h"
#include "Square.h"

/*
Class Hierarchy:

       Area
         |
  +------+-------+
  |              |
Circle      Rectangle
  |              |
 Ring          Square

Key:
- Area is the base class.
- Circle and Rectangle inherit from Area.
- Ring inherits from Circle.
- Square inherits from Rectangle.
*/
int main() {
    double total_perimeter = 0.0;

// Create an array of Area pointers for dynamically allocated objects
    Area* shapes[] = {
         // Valid if Ring overrides calcPerimeter()
        new Ring("BLUE", 5, 2),   
        // Valid if Circle overrides calcPerimeter()    
        new Circle("YELLOW", 7), 
        // Valid if Rectangle overrides calcPerimeter()     
        new Rectangle("GREEN", 5, 6),
        // Valid if Circle overrides calcPerimeter() 
        new Circle("RED", 8),      
        // Valid if Rectangle overrides calcPerimeter()   
        new Rectangle("BLACK", 10, 20), 
          // Valid if Ring overrides calcPerimeter()
        new Ring("VIOLET", 100, 5),
        // Valid if Square overrides calcPerimeter() 
        new Square("WHITE", 4)        
    };

    const int num_obj = sizeof(shapes) / sizeof(shapes[0]);

    cout << "Calculating total perimeter:\n";
    for (int i = 0; i < num_obj; ++i) {
        if (shapes[i]) {
            total_perimeter += shapes[i]->calcPerimeter(); // Polymorphic call
        }
    }

    cout << "Total perimeter of all shapes: " << total_perimeter << endl;
for (int i = 0; i < num_obj; i++) {
    cout<<"\n"<<endl;
    cout << "Area: " << shapes[i]->calcArea() <<endl;
}
    // Clean up dynamically allocated memory
    for (int i = 0; i < num_obj; ++i) {
        delete shapes[i];
    }


    return 0;
}
