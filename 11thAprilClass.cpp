// friend function
#include <iostream>
using namespace std;

// discusiion - how to give access of private data in class to a function defined outside the class

class Test{
    int a;
    public:
    int b;
        Test(){a=10;b=20;}
        void print_data(){
            cout << " print a = " << a <<" b = "<< b << endl;
        }
        friend void print_data_1(Test); // this stmt gives access to private data to print_data_1 which is a non member function 
};

void print_data_1(Test temp){cout<<"not a member function of calss"<<temp.a<<" "<< temp.b<<endl;}

int main(){
    Test t1;
    //t1.print_data();
    print_data_1(t1); // non member function, so itcanot access private  things in class test but
    // i used friend  so now pribate is given access so no error will come.
    return 0;
}



//friend class
#include <iostream>
using namespace std;

// discusiion - how to give access of private data in class to a function defined outside the class

class A{
    int a;
    public:
        Test(){a=10;}
        void print_data(){
            cout << " print a = " << a  << endl;
        }
        friend class B;
        
};

class B{
    int b;
    public:
        Test(){b=10;}
        void print_data(){
            cout << " print a = " << a  << endl;
        }

};
void print_data_1(Test temp){cout<<"not a member function of calss"<<temp.a<<" "<< temp.b<<endl;}

int main(){
    Test t1;
    //t1.print_data();
    print_data_1(t1); // non member function, so itcanot access private  things in class test but
    // i used friend  so now pribate is given access so no error will come.
    return 0;
}

