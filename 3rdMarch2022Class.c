/* Intro to Funcions in C */

// 1) Pre defined/Library functions -  Already defined, Default and User defined is defined by user!

// 2) User defined function pe charcha 

/*DataType name(arg-1,arg-2 and so on){   //Datatype is based on the value that we are going to return.
    statements ....
}*/

*****
// Simple function(),no-input, no return value
#include <stdio.h>
void greet(char name[20]); //Function declaration
int main(){
    greet("Chandu");    //Calling function
    return 0;
}
void greet(char name[20]){
    printf("Hello %s" , name);      //Function body/defination
}   

*****
// Simple function() takes input, but no return value
#include <stdio.h>
void max(int,int);

int main(){
    int a, b;
    scanf("%d %d", &a,&b);
    max(a,b);
    return 0;
}
void max(int x, int y){
    if(x>y){
        printf("%d is bigger than %d", x, y);
    }
    else{
        printf("%d is bigger than %d", y, x);
    }
}

*****
// Simple function() takes input, but alse return value
#include <stdio.h>
int max(int,int);

int main(){
    int a, b;
    scanf("%d", &a,&b);
    printf("%d is big",max(a,b));
    return 0;
}
void max(int x, int y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}

*****
// everything add sub mul div etc using fuction
#include <stdio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
float div(int,int);
int rem(int,int);
int max(int,int);
int min(int,int);
int main(){
    int a,b;
    scanf("%d %d", &a,&b);
    printf("%d\n", add(a,b));
    printf("%d\n", sub(a,b));
    printf("%d\n", mul(a,b));
    printf("%.2f\n", div(a,b));
    printf("%d\n", rem(a,b));
    printf("%d\n", max(a,b));
    printf("%d\n", min(a,b));
}
int add(int x,int y){
    return x+y;
}
int sub(int x,int y){
    return x-y;
}
int mul(int x,int y){
    return x*y;
}
float div(int x,int y){
    return (float)x/y;
}
int rem(int x,int y){
    return x%y;
}
int max(int x,int y){
    if(x>y){
        return x;    
    }
    else{
        return y;
    }
    
}
int min(int x,int y){
    if(x>y){
        return y;    
    }
    else{
        return x;
    }
    
}

*****
// Passing array as an argumnet
#include <stdio.h>
void print_array(int[3]);
int main(){
    int a[3] = {10,20,30};
    print_array(a);
    return 0;
}
void print_array(int x[3]){
    for(int i = 0; i<3; i++){
        printf("%d ",x[i]);
    }
}
