/*The ‘this’ pointer is passed as a hidden argument to all nonstatic member function calls and is available as a local variable within the body of all nonstatic functions. ‘this’ pointer is not available in static member functions as static member functions can be called without any object with class name.
The this pointer is a pointer accessible only within the nonstatic member functions of a class, struct, or union type. It points to the object for which the member function is called. Static member functions don't have a this pointer.
Syntax:
this
this->member-identifier*/



//PROGRAM 
#include<iostream> 

using namespace std;

class Test 
{ 

private: 

   int x; 

public: 

   void setX (int x) 

   {
       this->x = x; 

   } 

   void print() { cout << "x = " << x << endl; } 
}; 

  

int main() 
{ 

   Test obj; 

   int x = 20; 

   obj.setX(x); 

   obj.print(); 

   return 0; 
} 

