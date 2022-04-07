// Constructors and destructors

// example on passing object as an argument

#include <iostream>
using namespace std;

class Test{
    int x;
    public:
        void get_data(){
            cout << "enter a number";
            cin >> x;
        };
        
        void print_data(){
            cout << x <<"address of variable " << &x <<endl;
            //(ofc yaha alag hoga think why!?
            // x variable abh yaha ek mem location me store nai hoga jabki t1.x ek loc me jaega and t2.x ek loc me jaega
        };
        
        void add(Test obj1,Test obj2){
            x = obj1.x + obj2.x;

        };
        /* OR esa bhi soch sakte hai
        Test add(Test obj1,Test obj2){
            Test temp;
            temp.x = obj1.x + obj2.x;
            return temp;
        };
        */
};

int main(){
    Test t1,t2,t3;    // object is created here t1 is object of "Test" class
    t1.get_data();
    t1.print_data();
    t2.get_data();
    t2.print_data();
    t3.add(t1,t2);
    t3.print_data();
    return 0;

}


// Example for constructor

#include <iostream>
using namespace std;

class Test{
    int x;
    public:
    void print_data(){
            cout<<x;
        };
    Test{
        cout<<" call to default constructor"<< endl; // constructor ek default value set karne ko alllow karta hai user ko.
        x = 2000;
        print_data();
    };
        
        Test(int i){
            x = i;
            print_data();
        };

        ~Test(){
            cout<<" Object removed from the memory"<<endl; // ye default value ko nikal deta hai
        };
};

int main(){
    Test t1;
    Test t2(100);
    return 0;
}