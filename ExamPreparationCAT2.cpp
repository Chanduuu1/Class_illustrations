// object oriented programming

#include <iostream>
using namespace std;


class hero{
    private:
        char name[100];
        int health;
        char level;

    public:
        int getHealth(){
            return health;
        }
        void setHealth(int h, char pwd){
            if(pwd == 'A'){
                health = h;
                cout << "Health successfully updated" << endl;
            }
            else{
                cout << "Sorry wrong password input health update unsucessfull" << endl;
            }
            
        }
};

int main(){
    hero ramesh;
    int H;
    char pwd;
    cout << "enter the health of ramesh and pwd" << endl;
    cin >> H >> pwd;
    ramesh.setHealth(H , pwd);
    cout << "the health of ramesh is" << ramesh.getHealth() << endl;

    // dynamic allocation
    hero *Thorptr = new hero;
    cout << "enter health of Thor bhai also enter password " << endl;
    int tH;
    char pwdThor;
    cin >> tH >> pwdThor;
    (*Thorptr).setHealth(tH , pwdThor);
    cout << "the health of Thor is" << (*Thorptr).getHealth() << endl;
// ese bhi kar sakte hai!
    cout << "the health of Thor is" << Thorptr->getHealth() << endl;

    return 0;
}


/* reference variable concept.(alias wala)*/

int i = 5;
int& j = i; // yehi hai uska format.
// abh ussi memory container ka naam i bhi hai j bhi hai do naam hai
// esa samaj;
// abh iski zarurat kyu?
#include <iostream>
using namespace std;

void update(int k){
    k++;
    cout << k << endl;
}

int main(){
    
    int n = 5;
    update(n);
    cout << "before " << n << endl;
    cout << "After  " << n << endl;
}
// jo update function me jaa raha hai n ki value woh value reality me ek naye mem location me store ho raha hai
// and operations uss varaibles ke sath ho raha hai so k = 6 but before after = 5
// so agar me update function me update(int& k) kardu toh abh naya mem location nai banega instead n ke mem location ka
// doosra naam ho jaega k so operations wahi perform hoga and update wahi hoga so waha need aati hai!
// so yaad rakhna function me humesha argument ki copy create hoti hai and waha functions perform kare jate hai
// so & agar use kare toh woh copy create nai hoga operations ussi pe perform honge!

 
/* Variable size array */
// runtime me agar muje decide karna ho ki muje kitne size ki array chahie toh easy way toh apan yehi karenge:-
int i;
cin >> i;
int array[i];
// but this is a bad practice kyu ka samay nai hai L-28 refernece variable 22:00 babbar ka video dekhle
// so variable size array ke lie jo runtime me hum decide karenge:
// uske lie hume heap memory ka use karna oadta hai. and heap mem ko access karne ke lie 
// we use new keyword, ye new keyword ek tarike ki chaabi hai heap memory use karne ki

// so say muje char store karna hai heap me toh i will write:
new char; // hogai mem alot char ke lie heap me;
// abh ye heap mem jo assign karta hai uska naam rakhne ko allow nai karta. woh bolta bc 
// sirf address dunga me toh mc
// so we write

char *ch = new char; // toh abh ch variable me memory store hogai reserved space ki jo heap me hai

// abh similarly variable array banan toh:

int n;
cin >> n;
int *arr = new int[n]; // abh yaha heap mem me n*4 bytes ka mem allocate hoga which is not bad because heap ke pass gand phaad mem hai
// toh ese banaenge variable size ka array ye acha practice hai aur line 79 wala bad practice
#include <iostream>
using namespace std;

int getSum(int *temparr, int tempn){
    int sum = 0;
    for(int i=0; i < tempn; i++){
        sum += temparr[i];
    }
    return sum;
}

int main(){
    int n; 
    cin >> n;

    int *arr = new int[n];

    // taking values in array;
    for(int i=0; i < n; i++){
        cin >> arr[i];
        // or cin >> *(arr + i);
    }

    int sumOfArray = getSum(arr,n);

    cout << "The sum of array is " << sumOfArray << endl;
    delete []arr;
    return 0; 
}

//yeh tha bhai dynamic allocation, kuch nai hai sirf yaha hum memory storage aalag jage par kartw hai which is called HEAP instead of normally hum stack me karte hau
// heap ka adv hai ki ye bhai ke pass gand ohaad storage hoti hai, so dynamic allocation ya koi esa variable jiska size runtime me hi pata chalegi
// use hum heap me store karenge instead of stack, god and bad practice

// iss heap mem ko use karne ki chaabi "keyword" is new. heap bau memory ka naam rakhne allow nai karta isliye hum usse
// ptr variable me store karte hai, ye ptr ka memory stack me allot hota hai and ye jis memory ko ye pt kar rha hai woh heap me hoga(btw ptr 8bytes ka mem leta hai)
// so yeh toh bhai thoda intro wapas video dekhna ho toh : L-28 refernece variable code help

// abh aajate hai initial discussion me object dataype ka dynamic wala case



/* Chalo bhai constructors ke pass */
// jaise hi me ek object define karta hu ek class ka, ek default function call hojata hai which is called constructor
// say
hero ironMan;
// toh jaise hi run karunga aur jab ye line run hoga tabh 
// ek function call hoga ironMan.hero(); ye hero class ka ek function hai jo default class bante time ban jata hai
// isse apan chahie toh fir define kar sakte hai kese bhi lekin ye bana hua rehta hai
// so
#include <iostream>
using namespace std;


class hero{
    public:
    int health;
    hero(){
        cout << "default constructor not default anymore called " << endl; 
        }
};

int main(){
    cout << "hello ji" << endl; 
    hero ironman;
    hero *thorPtr = new hero;
    return 0;
}
// abh mene default ko hata kar constructor banaya so each and every time i define a object
// the constructor will be called YAAD RAHE NO RETURN TYPE HAI constructor ka

// parameterized constructor
#include <iostream>
using namespace std;


class hero{
    private:
        int health;

    public:
        int level;
        hero(){
            cout << "normal constructor called since object was defined without any argument / parameter" << endl;
        }
        hero(int health){
            cout << "parameterized constructor called because object defined with an parameter" << endl;
            cout << "mem address " << this << endl;
            this -> health = health; // abh yeh donno health nearest defined health ko represent kar rahi hai which in this case is
                                     // health in line 188 but me chahta hu ki ln 185 wala health ke andar ln 188 ka parameter health hai woh dall jae 
                                     // so in such cases we use 'this' keyword this keyword is a pointer variable storing mem address of current object
    
    // agar proof chahie ki 'this' current object ka pointer variable hai toh see main function
    }
         

};

int main(){
    cout << "hello ji" << endl; 
    hero ironman(10); // here ironman is current object so 'this' keyword jo hai woh ironman object (as whole) ka mem address store karega. 
                      // abh uss health me (ironman obj ka health me) , input parameter wala health dall jaega. naam different use karete to kaafi simple cheese ho jat lekin woh koi aur baat hai!
    cout << "the health of ironman is " << ironman.health << endl;
    cout << "address of ironman object" << &ironMan << endl;

    hero *thorPtr = new hero(15);
    cout << "the health of ironman is " << (*thorPtr).health << endl;
    cout << "address of thor object (which is in heap) " << thorPtr << endl;
    
    
    
    return 0;
}

// Perfect! itna samaj gaya? good moving onnn.....



/* copy constructor */
#include <iostream>
using namespace std;


class hero{
    private:
        int health;
        char level;

    public:
        hero(){
            cout << "normal constructor called " << endl;
        }

        hero(int health, char level){
            this -> health = health;
            this -> level = level;
            cout << "paramterized constructor called" << endl;
        }

        void print(){
            cout << "health = " << health << " " << "level = " << level << endl;
            cout << "health = " << this -> health << " " << "level = " << this -> level << endl;
        }

        int getHealth(){
            return health;
        }
        void setHealth(int h){
            health = h;
            cout << "Health successfully updated" << endl;
        }
        char getLevel(){
            return level;
        }
        void setLevel(char l){
            level = l;
            cout << "Level successfully updated" << endl;
        }
        
};

int main(){
    hero ironman(100, 'A');
    ironman.print();
    hero thor(ironman);
    // so basically yaha mene ironman object ke attributes copy kardia thor object me.
    // yehi hai copy cnstructor ka kaam
    // abh me copy constructor define bhi kar sakta hu parameter constructor jaise
    return 0;
}


/* Destructors */
// memory de-allocate
int main(){
    hero a;
}
// yaha hero ki scope khtm hogai toh abh memory deallocate ho jaega and space free hojaegi 8bytes ki
// so yeh bhi automatically create ho jata hai. hum chahe toh destructor bana bhi sakte hai
// iska bhi no return type.
class hero(){
    hero(){
        cout << "constructor called " << endl;
    }
    ~hero(){
        cout << "destructor bhai called " << endl;
    }
};
int main(){
    hero a;
    hero *b = new hero;
    delete b;
} 
// static allocation oject jo hota hai uska toh scope khtm hone pe destructor call ho jata hai
// lekin dynamic allocation wala object toh scope khtm hone par bhi wahi rehta hai heap me toh uska mem clear karne ke lie
// delete use karna hoga fir hi woh destructor ko call karega.
 

/* stattic members and functions */
// yeh woh data members hai jinhe use karne ke liye object ka create karna zarori nai hota, kyuki ho sakte hai yeh members
// object par depend hi na kar raha ho!
// static members belong to class as whole
// syntax: 

class hero{
    public:
        static int timeToComplete; // yeh mene static member define kar dia isko use karne ke lie object ka hona zaruri nai hai

};

int hero:: timeToComplete = 5; // initialize karne ka syntax

int main(){
    cout << hero::timeToComplete << endl;
    return 0;
}

// static functions
// inn function ko create karne ke lie object ko create karna zaruri nai
// sirf static member ko hi access kar sakta hai static function
class hero{
    public:
        static int timeToComplete; // yeh mene static member define kar dia isko use karne ke lie object ka hona zaruri nai hai
        static int random(){
            return timeToComplete;
        }
};

int hero:: timeToComplete = 5; // initialize karne ka syntax

int main(){
    cout << hero::timeToComplete << endl;
    return 0;
}

// function with object as argument
// kuch nai bhai simple hi hai simp:
class hero{
    public:
        int a;
        void power(hero h){
            a = a + h.a;
        }
};

// esa use kar skte h, woh toh jab use aaega automatically karlega tu.
