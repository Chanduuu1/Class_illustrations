/* ternary opeator example */
#include <stdio.h>
int main(){
    int a = 100, b = 200, max;
    a>b?printf("a is big"): printf("b is big"); // true hua a>b then 1st part will be excecuted else seconde part will be
    max = a>b?a:b; // a>b hua toh max variable me 'a' store ho jaega, else b store hoga.
    return 0;
}

/* other gyaans */
#include<stdio.h>
#include<stdlib.h>

typedef struct{     // typedef muje datatype ko alag nam se call karne enable karta hai so har baar muje struct likhne ki jaga nau hai sirf 'test' likho
    int i;
    int *ptr;
}Test;

int main(){
    Test *t1 = (Test*)malloc(sizeof(int));
    t1-> ptr = (int*)malloc(sizeof(int));
    scanf("%d", &t1->i);
    scanf("%d", &t1->ptr);

    Test *t1 = (Test*)malloc(sizeof(Test[3]));
    Test *t1 = (Test*)malloc(3*sizeof(Test));
    Test *t1 = (Test*)calloc(3, sizeof(Test));

    t1[0]->i = 10; t1[1]->i = 100; t1[2]->i = 1000;
    printf("%d\t%d\t%d",t1[0].i,t1[1].i,t1[2].i);
    printf("%d\t%d", t1->i,t1->ptr);
    printf("%d\t%d\t%d", t1[0]->i, t1[1]->i , t1[2]->i);
    free(t1);
    return 0;
}