// Simple Printing
#include <stdio.h>          
int main()
{
    printf("Hello world");
    return 0;
}

/* Different data types */
#include <stdio.h>          
int main()
{
    int age = 19;
    double marks = 98.7;
    char letter = 'A'     // yaha we can only include 1 letter, word ya fir sentence nai kar sakte uske liye special chese hai:-
    char name[] = "Chandrashekhar!"   // esa declare karna hoga variable ko [] represents array ig.

}

/* Thoda printf ke statements ke bare me */
#include <stdio.h>
int main()
{
    printf("%d",500); // abh jab hume 500 as a integer print karna hai then we use %d taaki printf usse as a string na traet karke as a int treat karega.
    // % ko format specifier ke time aksar use kara jata hai.   

    printf("my favourite %s is %d","number" , 500); // %s text allow karta hai jis prakar %d int allow karta! Also ye place holder ke tarah be act karta hai and place sequenctially occupy karta hai.
    //%f agar hoga toh floating value daal sakte the

    favNum = 50;
    printf("my favourite number is %d",favNum);  // esa variables ko bi use kar sakte hai.  
}

/* Working with Nums */
#include <stdio.h>
int main()
{
    printf("%f", 4 + 5); // error aega kyuki 4+5=9 is integer (still not clear with typcasting sure aage samaj jaega).
    printf("%f",4 + 4.5); //thid time no error 4 ko implicitly woh 4.0 kar dega and ans = 9.50000
    printf("%d", 4 / 5.0); //Abh yaha ulta hai ye error hoga because %d (d --> decimal) expects integer only (idk kya logic!?) 
    printf("%d",4 / 5); //output = 1 ! 
}

/* Math Functions */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    printf("%f", pow(2, 3))  // return 2^3
    printf("%d", pow(2,3))   // throw error because float ke sath hi ho sakta hai!

    // thoda un modern language hai toh sab kuch specify karna padega which is tideous unlike python but basics improve honge.