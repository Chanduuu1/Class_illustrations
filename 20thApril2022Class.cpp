/* multi level inheritance */

#include <iostream>
using namespace std;

class A{
    int a1;
    public:
        A(){cout << "Im constructor from class A " << endl;}
        ~A(){cout << "Im destructor from class A " << endl;}

};

class B : public A{
    int b1;
    public:
        B(){cout << "Im constructor from class B " << endl;}
        ~B(){cout << "Im destructor from class B " << endl;}

};

class C : public B{
    int c1;
    public:
        C(){cout << "Im constructor from class C " << endl;}
        ~C(){cout << "Im destructor from class C " << endl;}

};


int main(){
    //*cout << "a1 object is created " << endl; 
    A a1;
    cout << "the size of a_obj: " << sizeof(a1) << "bytes" << endl;
    B b1;   
    cout << "the size of b_obj: " << sizeof(b1) << "bytes" << endl;
    C c1;
    cout << "the size of c_obj: " << sizeof(c1) << "bytes" << endl;
    // output = 12 (4 * 3)
    return 0;
}