/* Recursive function */
// function calling the same function

/* Flow of Control
    return 4 * fact(3)
                return 3 * fact(2)
                            return 2 * fact(1)
                                        return 1 * fact(0)
                                                    this will return 1 because if condition
    
    Then last return will pass its value to uske upar wala return and so onn, but in computer sab ek jhatke me (simoultaneously) ho jaega.
 */



#include <stdio.h>
long long int fact(int x){
    int mul;
    if (x<1){
        return 1;

    }
    else{
        return x * fact(x-1);
    }

}
int main(){
    printf("%lld", fact(5));
}


// printing the series 1 + 1! + 2! + 3! + ...
#include <stdio.h>

long long int series(int x){
    if(x < 1){
        return 1;
        
    }
    else{
        return x * series(x-1);
    }

}    
int main(){
    long long int sum = 0;
    int n;
    scanf("%d", &n);
    
    for(int i = n; i>0;i--){
        sum += series(i);
    }
    
    printf("%lld", sum);
    return 0;
}
// fibonacii updated in a new code check it..