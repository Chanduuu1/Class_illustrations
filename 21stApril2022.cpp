

/* pointer object */

#include <iostream>
using namespace std;

class Test{
    private:
        int a;
    public:
        Test(){cout<<"constructor called"<< endl; a = 10;}
    void print_data(){cout << "the value of a = "<< a++ << endl;}

};

int main(){
    Test t1;
    cout<<"t1 obj is created " << endl;
    t1.print_data();

    Test *ptr; //not creating an objet but ptr is ready to point an obj created later. stmt samaj nai aaya toh t1 obj ke sath compare kar.
    cout<<"ptr is created " << endl;
    ptr = &t1;
    ptr->print_data(); // yaha t1 obj ka mem address ptr point kar raha so!
    // normal ptr se alag hai, because yaha t1 object ke pass kitne saare atributs hinge function honge toh woh sab ka masterkey jaisa samaj le

    Test t2;
    cout<<"t2 obj is created " << endl;
    ptr = &t2;
    ptr->print_data();

    ptr = new Test();
    ptr->print_data();  
    return 0;
}



/* Multipath inheritance */
#include <iostream>
using namespace std;

class A{
    public:
        A(){cout << "i m from class A"<< endl;}
        void put(){cout << "im put() function from class a"<< endl;}

};

class B: virtual public A{ // why virtual used, go through line 82 - 90
    public:
        B(){cout << "i m from class B"<< endl;}
        void put(){cout << "im put() function from class b"<< endl;}

};

class C : virtual public A{
    public:
        C(){cout << "i m from class C"<< endl;}
        void put(){cout << "im put() function from class c"<< endl;}

};

class D : public B, public C{
    public:
        D(){cout << "i m from class D"<< endl;}
        void put(){cout << "im put() function from class d"<< endl;}

};

int main(){
    D d1;// sirf ye line ka output dekhega toh since do class B,C se inherit kar raha b
    // so 1s path se jaega toh b aaega fir b me toh a rahega toh pehle waha se do stmsts aaenge
    // fir wapas D se woh C jaega then eventuallly A then 2 stmts return honge so understand output.

    d1.put(); //overwtiting(derived overwrites base) hojata hai something binding kuch
    // so iska output ko dhyaan diyo.

    d1.B::put();
    // is case me overwriting wala case yaha kuch aur hai woh tu dekhlena abh 
    // output yaha b ka puts aajaega

    //abh agar A ka put use karna ho.
    d1.B::A::put(); // error aaega (WITHOUT VIRTUAL KEYWORD! ); iss stms ka mtlb hai d1 obj ka A class se relation B ke through depict kara rahe hai. samaj nai aaya? good!
    d1.C::A::put(); // error aaega
    d1.A::put(); // error aaega
    
    // error kyu hai: comiler bhai confuse hojata hai class A kis road se jae kyuki do road hai. again agar hum road spceify bhi kar rahe hai jaisw linne 83,84 me then to nai hoga 
    // so yaha virtual karke kuch use karna hoga.

    // so now i will introduce virtual in class B and C


    return 0;
}



/* Demo on virtual function */
#include <iostream>
using namespace  std;

class Base{
    public:
        virtual void display(){"i'm from base class"<<endl;} // refer line 127.
};
class Derived: public Base{
    public:
        void display(){"i'm from derived class"<<endl;}
        void fun(){cout<<"hello im derived class fun()"<<endl;}
};

int main(){
    Base *ptr;
    Derived d1;
    d1.display(); //donno stmt aaenge.
    d1.Base::display(); // bas ka hi display
    ptr = &d1;
    ptr -> display(); // yaha sirf base ka display hi aaega! pata nai kyu!?
    ptr -> fun(); // ye error aega bolega fun() base ka member nai hai, issi fun() ko sir ne base class me dala toh chal raha tha! esa kyu!?
    
    // ek aur point ptr base class ka hai so yaad rakhna base ka ptr can point derived ka but vice versa is not possible! just a GK yaad rakhna.
    // kyuki baap baap hota hai aur beta beta
    
    
    // abh karenge jaadu! i will now add virtual keyword in base function

    // abh error nai aaega abh output line 120 ka "im from derived aaeaga" nai toh pehle erroe ara tha line 127 ka "hello im fun()" aaega jo pehle error aaega.
    
    //aao reason sameje
    
    // virtual -- binding ke sath kuch samband hai pata nai abh :-(
    
    return 0;

    // issi ke sath inheritance khtm.


// activites karne hai moodle pe inheritance ke saare patterns try karne hai ek ek kareke jaisa bhi program me banana hai tera choice.
}