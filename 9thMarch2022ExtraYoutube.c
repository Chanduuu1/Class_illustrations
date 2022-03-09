// Revisiting pointer.


/* Finding mem address of a variable */

#include <stdio.h>
int main(){
    int age = 30;
    //abh muje age variable ka memory addres chahie toh kya karu?

    printf("The mem address of age is: %p \n", &age);
    //&age is a pointer the & return the memory address and
    // %p denotes pointer it willl return value in hexa!
    printf("The mem address of age is: %0x", &age);
    // %0x toh hexa ka hi hai.

    return 0;
}

// Now like int stores whole numbers, pointer stores memory address! simple

/* Lets store some variable's address in ptr */

#include <stdio.h>
int main(){
    int age = 30;
    int * pAge = &age;
    // Abh pAge me address store hogaya! Simillarly
    double gpa = 3.4;
    double * pGpa = &gpa;
    char grade = 'A';
    char * pGrade = &grade;

    return 0;

}


/* Dereferencing pointer */
// Meaning we will go to that memory address of pointer and return the value stored.

#include <stdio.h>
int main(){
    int age = 30;
    int *pAge = &age;
    printf("mem add: %p", pAge); 
    //%p address ko hexa decimal ke form me present karega, and pAge variable me toh apna stored hai value..
    
    printf("dereferenced value %d", *pAge);
    // %d int form me present karega mem address ke content ko and *page is dereferenced.
   
    //  OR

    printf("dereferenced value %d", *&Age);
    //%d int form me present karega mem address ke content ko and *&Pge is dereferenced.
    
    // ALSO

    printf("dereferenced value %d", &*&Age);
    // This will again return the memory adress of age varable! but its format would be in int %d obviously.
    return 0;
}