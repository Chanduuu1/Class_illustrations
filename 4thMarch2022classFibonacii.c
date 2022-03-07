#include <stdio.h>
int fSeries(int x);
int main(){
    int n;
    printf("enter the number of term you want: ");
    scanf("%d" , &n);
    for(int i = 0 ; i< n; i++){
        printf("%d ", fSeries(i));
    }
    

    
    return 0;
}

// Fibbonacii 0 1 1 2 3 5 8 ....
int fSeries(int x){
    if(x>=2){
        return fSeries(x-2) + fSeries(x-1);

    }
    else if(x == 1){
        return 1;
    }

    else if(x ==0){
        return 0;
    }

}


/* pehle f(0) returns => 0
   then f(1) returns => 1
   then f(2) returns => f(0) + f(1)
   then f(3) returns => f(1) + f(2)
   and so onn ... */