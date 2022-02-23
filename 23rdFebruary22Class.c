/* Looping statements continue */
// Pattern Questions 1) '* * * * *' total n rows
#include <stdio.h>
int main(){
    int n, i = 0,j;
    scanf("%d", &n);
    while(i<=n){
        j = 1;
        while(j<=n){
            printf("* ");
            j++;
        }
        printf("\n");
        i++;
    }
    return 0;
}

// Do while statements
do{
    expression to excecute....
}while(condition); //So even if a condition is false do block will be excecuted once only then it will know that cond is false and then break the do while loop and break free

// for loop
for(initialization ; condition ; incrementation/decementation){
    statements ...
    // init and incr/decr are optional we can leave them empty but confiton is compulsory, also we can include those values inside loop
}

// same pattern questions usng for loop
#include <stdio.h>
int main(){
    int n,i,j;
    scanf("%d", &n);
    for(i = 1;i<=n;i++){
        j = 1;
        for(j = 0;j<=n;j++){
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}