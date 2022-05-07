//demo on t1++
// using without operation overloading
#include <iostream>
using namespace std;

class Test{
    int a;
    public:
        Test():a(10){
            cout << "default constructor" << endl;
        }
        void incr(){++a;}
        void display(){
            cout << "the value of a = " << a << endl;

        }

};

int main(){
    Test t1;
    t1.incr();
    t1.display();
    return 0;

}

// using operation overloading

#include <iostream>
using namespace std;

class Test{
    int a;
    public:
        Test():a(10){
            cout << "default constructor" << endl;
        }
        void operator ++(){++a;}
        void display(){
            cout << "the value of a = " << a << endl;

        }

};

int main(){
    Test t1;
    ++t1;++t1;++t1;   //t1.operator ++()
    t1.display();
    return 0;

}