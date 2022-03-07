/* Pointers in C */

// Pointer is a special type of variable it point/hold address of another variables
// say
int x = 10;

// basic informations of variable above
// 1. Number of bytes = 2(say)
// 2. Name of variable = x
// 3. Address of x => 0x100 (pata nai lekin some address). For low level language variable name ke jaga address use karna padta hoga.
// 4. And value of var = 10

// Pointer Example
#include <stdio.h>
int main(){
    int a = 0;
    int *ptr_1 = NULL; // * ho toh special variable which here will hold integer addresses.
    printf("Contint of a = %d \n", a);
    printf("Addres of a = %0x \n", &a); //0x will give address in hexa decimal format.
    ptr_1 = &a; //Address of a is assigned to Ptr_1 variable. But dont get confused ptr_1 ka address toh abh bhi wohi hai jo pehle tha. just variable ka value is address of a.
    printf("Contint of ptr_1 = %d \n", ptr_1); // Will convert address to integer so kuch bhi aagea address of a (previous line)
    printf("Contint of ptr_1 = %0x \n", ptr_1); // return address of a because 2line up code. in hexa form
    printf("Addres of ptr_1 = %0x \n", &ptr_1);  // & is use to get addresses.
    *ptr_1 = 100; //mene memory position me jake value change kiya instead of simply changing value of variable  // ptr_1 is just address but *ptr_1 is the value at the address.

    printf("Contint of a = %d \n", a);
    printf("content of a(updated using pointer var) = %d \n", *ptr_1);


    int **ptr_2 = &ptr_1;
    printf("Contint of ptr_2 = %0x \n", ptr_2); // ptr_1 ka address is ptr_2 ka content
    printf("Addres of ptr_2 = %0x \n", &ptr_2); // iska address alag hi hai
    

    // Wont confuse you more....
    // will update after watching codecamp lec.. // time de seekh jaega.
    
    return 0;
}