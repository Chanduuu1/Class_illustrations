/* Static data member and statuc member functions*/

// demo on pointers
#include <iostream>
using namespace std;

int main(){
    int a = 100;
    int *ptr;
    ptr = &a;
    cout<<" the content of ptr (mem address of var a) "<< ptr << endl;
    cout<<" the content of ptr pointing (Value of var a) "<< *ptr << endl;
    return 0;
}

//  creating an allias for a var
// aslo know as reference.

#include <iostream>
using namespace std;

int main(){
    int a = 100;
    int &y = a; // y is alias to a.;  // esa defined hai referning samaj le zyada samajne mat ja.
    // int y = a; bhi reference or alias hi hota hai but abh iss case me y ka mem address  naya ban jata hai toh yaha do different adddresses pe same value store hoga isme. 
    int *ptr;
    ptr = &a;
    cout<<" the content of ptr (mem address of var a) "<< ptr << endl;
    cout<<" the content of ptr pointing (Value of var a) "<< *ptr << endl;
    cout<<" the content of ptr (mem address of var y) "<< y << endl;
    cout<<" the content of ptr pointing (Value of var y) "<< &y << endl;
    
    return 0;

    // imp baat abh kyuki dono vars a and y ka ek hi mem locatn hai so changing any one of them will change bot of there values!
    // jabki esa nai hoga agar me referencing iss asis pe karta => int x = y; esa me mem loctn bhi do do hai.
}


// Dynamic allocation
#include <iostream>
using namespace std;

int main(){
    int *ptr = new int; // new data type is used for run time allocation so yaad rakhna.
    cin>> *ptr; // say mene 100 input kia and address pe store kia
    cout << "content of ptr: " <<ptr << endl;
    //output = mem address aaega hexadeciaml format me
    
    cout << " the value of ptr is " << *ptr << endl;
    // outpt = 100
    
    delete ptr;

    cout << "content of ptr: " <<ptr << endl;
    //output = mem address aaega hexadeciaml format me 
 
    cout << " the value of ptr is " << *ptr << endl;
    // output = kuch bhi random kyuki mene delete kar dia mem address me stroe hue value ko (which was 100)
    
    return 0;
}


// demo on copy constructor
#include <iostream>
using namespace std;

class Test{
    private:
        int *i;
    public:
    Test(){
        i = new int; // also default value 100 rakhni hai toh istead of initializing as done in next line we can do this---> i = new int(100) esa
        *i = 100;
    };
    void print_data(){
        cout<<" the value of i = "<< *i <<endl;
        cout<<" the address of i = "<< &i <<endl; // every time we run addres will change because run tiem allicatn hai

    };
};



int main(){
    Test t1;
    t1.print_data();
    
    // iske aage kuch smaj nai araha tha! :|
    return 0;
}


// Demo on static data member and member function
#include <iostream>
using namespace std;

class Test{
    private:
        int a;
        int b;
        static int c;
    public:
        Test(){
            a = 10;
            b = ++a;
            c = 0;
            ++c; 
        };

        void print_data(){
            cout<< " a= " << a << endl << "b = " << b << endl << " c = " << c << endl;
        }
};

int main(){
    Test t1,t2;
    t1.print_data(); 
    // output => a = 11 , b = 11, c =1
    t2.print_data();
    // output => a = 11 , b = 11 , c=2
        //obv!
    // esa lag raha tha ki c wapas 0 ho jaega kyuki class me wese defined hai lekin kyuki static keyword use kar hai so results esa hai.

    return 0;

}

// now we can also create a static functions
