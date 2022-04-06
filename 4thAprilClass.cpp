/* Object oriented programming */

/* OOPS concepts 
    Absrtraction - Backbone of OOP, Chupa hua functions se mene koi cheese return kara toh  abstracted from the function without knowing how it worked
    encapsulation - Process of binding data and function and put in single unit
    polymorphism - Dhyaan nai diya :))
    inheritance  - Features from existing things
    
    Class - Its blueprint, yaha hum objects ko define karte hai ki kesa dikhega, uske propetries, methodds etc..
    Object - 
    operator overloading - i can define a new defination on an operator i.e getting control of operator for eg + can be made to act as - .
    */


/* Say we create a box object
    now length, height, width ye sab 
    Abh vol = l*w*h

    here data member are => l, h, w
    function used in box => vol()

    abh inn dono ko combine kia toh we make an object.*/

// demo on box object
# include<iostream>
using namespace std;

class Box{      // in class we defined blueprint for Box how it should be 
    private:
        int len, wid,hei;
    public:
        void get_data(){
            cin>>len>>wid>>hei; // >> mtlb extraction operator
        };
        void vol(){
            cout<<"the volume = "<<len*wid*hei<<endl; // endl --> same as \n
        };
        
};

int main(){
    Box b1,b2;     // b1 is object of Box class
    b1.get_data();
    b1.vol();
    b2.get_data();
    b2.vol();
    
    
    return 0;
}

// creating student object
#include <iostream>
using namespace std;

class student{
    private:
        string name, course, grade;
        int year, age;
    public:
        void get_stud_info(){
            cin>>name>>course>>grade;
            cin>>year>>age;
            
        };
        void display_stud_info(){
            cout<<"hello my name is "<<name<<" I am pursing "<< course << " and im in " << year << " year " << " my latest grade was " << grade << " and i am " << age << " years old"<<endl;
        };
    
};

int main(){
    student stud1,stud2;
    stud1.get_stud_info();
    stud1.display_stud_info();
    stud2.get_stud_info();
    stud2.display_stud_info();
    
    return 0;
}
