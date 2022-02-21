/* Looping statements */
// 1.While loop (syntax)
while(condition){
    stat1;
    stat2;
    stat3;
    .... ;

}

/* Finding avg of 5 subjects using while */
#include <stdio.h>
int main(){
    int a = 1;
    int sum = 0;
    int sub;
    float avg;
    while(a<=6){
        printf("enter marks of subject %d", a)
        scanf("%d", &sub);
        sum += sub;
        a += 1;
    }
    avg = sum/5;        // sum / 5 dono int hai toh iska ans bhi int aega? i.e ans ka rond karke int hojaega 6.5-->6 
                        //(and avg kyuki float hai toh usme 6.0 karke save hoga jabki hona 6.5 chahie tha) but agar me sum/5.0 dalu 
                        // toh computer iss calculation ko implicitly convert karega float me and 6.5 will be generated as ans and will be stored as 6.5 in variable
                        // or else tuje explicit type conversion karna padega i.e (float) sum / 5 now although both sum and 5 is int and there ans was expected to
                        // be int but since i mentioned (float) calculation se pehle sum aur 5 cnvrt hoga float me i.e sum.0 /5.0 and ans saved = 6.5..... 
    printf("avg marks is %.2f", avg);
    return 0;
} 