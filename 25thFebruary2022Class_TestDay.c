/* Q1 Factorial question */
#include <stdio.h>
int main(){
    int n;
    int fact = 1;
    scanf("%d", &n);
    for(int i = n; i<=n; i--){
        fact *= i;
        if( i == 1){
            break;
        }
    }
    printf("%d", fact);
    return 0;
}

/* Q2 Sum of digits */
#include <stdio.h>
int main(){
    int n, sum = 0;
    scanf("%d", &n);
    while(n != 0){
        sum += n%10;
        n = n/10;
    }
    printf("%d", sum);
    return 0;
}

/* Q3 Palidrome or not */
#include <stdio.h>
int main(){
    int n,remainder,org,rev = 0;
    scanf("%d", &n);
    org = n;
    
    while (n!=0){
        remainder = n % 10;
        rev = rev *10 + remainder;
        n /= 10;
    }
    if( org == rev){
        printf("PALINDROME");
    }
    else{
        printf("NOT A PALINDROME");
    }
    return 0;
}

/* Q4 Prime or Not */
#include <stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    for (int i = 2; i<n; i++){
        if (n%i == 0){
            printf("NOT A PRIME");
            break;
        }
        else if (i== n-1 && n%i != 0){
            printf("PRIME");
        }
        else{
            continue;
            }
    }    
    
    return 0;
    
}

/* Q5 Whether digits of a number are factor of that number */
#include <stdio.h>
int main(){
    int n,dig,org,a = 0;
    scanf("%d", &n);
    org = n;
    while(n != 0){
        dig = n % 10;
        if (org % dig == 0){
            printf("%d ", dig);
            n = n/10;
        }
        else{
            n = n/10;
            a = a + 1;
            continue;
        }
    
    }
    if (a>=3){
        printf("NO FACTORS");
    }
    return 0;
}