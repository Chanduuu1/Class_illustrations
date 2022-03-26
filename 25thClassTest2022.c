#include <stdio.h>
void add();
void sub();
void mul();
void div();
int main(){
    add(1,6,1,-3);
    sub(1,2,1,6);
    mul(1,3,7,8);
    div(1,3,7,8);
    return 0;
}
void add(int a, int b, int c, int d){
    int numo,deno;
    numo = a*d + b*c ;
    deno = b*d ;

    for(int i = 2; i <= 10; i++){
        if (numo%i == 0 && deno%i == 0){
            numo /= i;
            deno /= i;
            i = 1;
        }
        else{
            continue;
        }
    }

    printf("%d / %d \n", numo, deno);
}

void sub(int a, int b, int c, int d){
    int numo,deno;
    numo = a*d - b*c ;
    deno = b*d ;

    for(int i = 2; i <= 10; i++){
        if (numo%i == 0 && deno%i == 0){
            numo /= i;
            deno /= i;
            i = 1;
        }
        else{
            continue;
        }
    }

    printf("%d / %d \n", numo, deno);
}

void mul(int a, int b, int c, int d){
    int numo,deno;
    numo = a*c ;
    deno = b*d ;

    for(int i = 2; i <= 10; i++){
        if (numo%i == 0 && deno%i == 0){
            numo /= i;
            deno /= i;
            i = 1;
        }
        else{
            continue;
        }
    }

    printf("%d / %d \n", numo, deno);
}

void div(int a, int b, int c, int d){
    int numo,deno;
    numo = a*d ;
    deno = b*c ;

    for(int i = 2; i <= 10; i++){
        if (numo%i == 0 && deno%i == 0){
            numo /= i;
            deno /= i;
            i = 1;
        }
        else{
            continue;
        }
    }

    printf("%d / %d \n", numo, deno);
}