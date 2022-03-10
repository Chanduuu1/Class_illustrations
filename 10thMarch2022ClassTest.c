// Test question
#include <stdio.h>
int Fun_1(int,int,int,int,int,int,int);
int Fun_2(int);
void Fun_3(int);
int main(){
    int lP,bP,wP,lL,bL,wL,n,sumOfDigits;
    scanf("%d %d %d %d %d %d %d", &lP,&bP,&wP,&lL,&bL,&wL,&n);
    printf("%d \n" , Fun_1(lP,bP,wP,lL,bL,wL,n) );
     
    sumOfDigits = Fun_2( Fun_1(lP,bP,wP,lL,bL,wL,n) );
    while(sumOfDigits >= 10){
        sumOfDigits = Fun_2(sumOfDigits);
    }
    
    printf("%d \n" ,sumOfDigits);
    Fun_3(Fun_2( Fun_1(lP,bP,wP,lL,bL,wL,n) ) );

    return 0;
}
int Fun_1(int a,int b,int c,int d, int e,int f,int g){
    int nRow,nCol,wPage,wPrint,wBook;
    nCol = b/e;
    nRow = a/d;
    wPrint = f*(nCol*nRow);
    wPage = (a*b)*c;
    wBook = g * (wPrint + wPage);
    return wBook;
}
int Fun_2(int x){
    int y;
    if(x>=10){
        y = x % 10;
        x -= y;
        x /= 10;
        return Fun_2(x) + y ;
    }
    
    else{
        return x;
    }
}

void Fun_3(int z){
    if (z % 2 == 0){
        printf("EVEN");
    }
    else{
        printf("ODD");
    }
}