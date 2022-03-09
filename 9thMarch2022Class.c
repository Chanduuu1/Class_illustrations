/* Allocating memory during run time - Dynamic Memory(calloc) malloc */


// 1. ek toh hota hai jo pehle hi kar lete hai :- compile time allocation  eg. int x = 100;
// 2. new type hai : run time allocation (heap memory)
//    a. malloc( n*sizeof(data_type) )  m alloc esa padhna. ; this function returns address
//    Eg. malloc(5*sizeof(int)) --- int ---> 4 byte ---> 20 bytes total

//    b. calloc( n,sizeof(data_type) ) ; this function returns address
//    Eg. calloc(5,sizeof(int)) ---> 20 bytes total

//    n = number of integers ; size = how many bytes woh mention here ; fir datatype.


// Now this functions return addresses so we have to save them in pointers!
// So

// int *ptr = malloc(5*sizeof(int)) LHS=> compilation me hi memory ho jaega and RHS=> runtime ke time address store karega ptr variable me.

// Now value toh bhar diya heap me abh use khali bhi karna padega! so for that use:-
// free(ptr) ---> Delocate.

// realloc(ptr,n*sizeof(int)) agar extra spaace chahiye ho.

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n); // runtime me muje kitna space chahie hoga woh mention karne ke liye.

    printf("%0x", calloc(n,sizeof(int)));  // run time me memory create hoga! iss printf se mene memory address find kia and haar baar run karne pe different address aaya which means memory create ho raha hai haar baar alag aalag jage pe.
    // but now muje woh address chahie so save it in ptr.

    int *ptr = calloc(1,sizeof(int));
    scanf("%d", ptr);
    printf("\n the content of ptr = %d", *ptr);
    // now khali karna hai memory
    free(ptr);
    printf("\n the content of ptr = %d", *ptr);

    return 0;
}


//

#include <stdio.h>
#include <stdlib.h>
int main(){
    int n;
    scanf("%d", &n); // runtime me muje kitna space chahie hoga woh mention karne ke liye.

    int *ptr = calloc(n,sizeof(int));
    for(int i = 0; i<n ; i++){
        scanf("%d", ptr[i]);
    }
    printf("\n the values : \n");
    for(int i = 0 ; i<n ; i++){
        printf("%d\t", ptr[i]);
    }
   free(ptr);
    return 0;
}


// pass by address
#include <stdio.h>
#include <stdlib.h>

void fun_ref(int *ptr){

    *ptr = 200;
}
int main(){
    int a = 100;
    fun_ref(&a);
    printf("\nbefore function call() = %d" , a);
    fun_ref(&a);
    printf("\nafter function call() = %d" , a);

    return 0;
}



// Static vaariable in function
#include <stdio.h>
void print_static_value(void){
    static int count = 0; // Static ke waja se initialization sirf ek hi baar hoga! 
                          //abh mene main function me 4 baar function call kia toh without static humesha 1 return hoga outpit me! jabke if i use static then intialization ek hi baar hoga! 
                          //now i will get 1 2 3 4 because incrementation operator ++.
    printf("%d" , ++ count);
}
int main(){
    print_static_value();
    print_static_value();
    print_static_value();
    print_static_value();
    return 0;
}

// Update karunga thoda samaj nai aaya aaj.