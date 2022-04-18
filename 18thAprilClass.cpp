// demo on muliple inheritance...
/*#include <iostream>
using namespace std;

class Base_1{
    public:
        Base_1(){cout << "I'm from Base-1"<< endl;}
};

class Base_2{
    public:
        Base_2(){cout << "I'm from Base-2"<< endl;}
};

class Derived: public Base_1, public Base_2{
    public:
        Derived(){cout << "I'm from Derived"<< endl;}
};

int main(){
    Derived d1; // output me teeno stmts(default constructors) aaenge kyuki Derived class base 1 and base 2 se derived hai i.e iske pass unke saare features hai(although public wale) so 
                // order would be base 1 ka constructor fir 2 ka fir derived ka
    return 0;
}*/

// other manipulations
#include <iostream>
using namespace std;

class Base_1{
    public:
        Base_1(){cout << "I'm from Base-1"<< endl;}
    void print_data(){
        cout << "I'm from Base_1"<< endl;
    }
    void fun(){
        cout<< "hello i am fun" << endl;
    }
};

class Base_2{
    public:
        Base_2(){cout << "I'm from Base-2"<< endl;}
    void print_data(){
        cout << "I'm from Base_2"<< endl;
    }
};

class Derived: public Base_1, public Base_2{
    public:
        Derived(){cout << "I'm from Derived"<< endl;}
    void print_data(){
        cout << "I'm from Derivedd"<< endl;
    }
};

int main(){
    Derived d1; // yeh teeno constructors ko print karadega
    d1.print_data(); // isme sirf Derived class ka print_data chalega!
    d1.Base_1::print_data(); // ye sirf Base1 ka print data function ko implment karega, again see no need to create instance/object for base 2 and me uska datta use kar raha
    
    d1.fun(); // yes although fun() is a func in base_1 it will implement the func
    return 0;
}