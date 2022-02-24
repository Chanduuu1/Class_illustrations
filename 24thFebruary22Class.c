/* About break and continue statements */
// Nothing new same as python;

/* Switch casses! */

// Arithmetic Operations
#include <stdio.h>
int main(){
    int a,b;
    char c;
    scanf("%d %c %d", &a,&c,&b);
    switch(c){
        case '+':
            printf("%d", a+b);
            break;
        case '-':
            printf("%d", a-b);
            break;
        case '*':
            printf("%d", a*b);
            break;
        case '/':
            printf("%.2f", (float)a/b);  // explicit conversion kiya kyukii a,b both are integer toh usko convert kiya float me fir find kiya value
            break;
        default:
            printf("invalid operator");
        
    }
}
}


// Whether even or odd using switch case

#include <stdio.h>
int main(){
    int a,b;
    scanf("%d", &a);
    b = a%2;
    switch(b){
        case 0: 
            printf("Even number");
            break;
        case 1:
            printf("Odd number");
            break;
        default:
            printf("hello");
            
    }
    return 0;
}


// Vowels or consonants
#include <stdio.h>
int main(){
    char word;
    scanf("%c", &word);
    switch(word){
        case 'a':
            printf("yes %c is a vowel",word);
            break;
        case 'A':
            printf("yes %c is a vowel",word);
            break;
        case 'e':
            printf("yes %c is a vowel",word);
            break;
        case 'E':
            printf("yes %c is a vowel",word);
            break;
        case 'o':
            printf("yes %c is a vowel",word);
            break;
        case 'O':
            printf("yes %c is a vowel",word);
            break;
        case 'i':
            printf("yes %c is a vowel",word);
            break;
        case 'I':
            printf("yes %c is a vowel",word);
            break;
        case 'u':
            printf("yes %c is a vowel",word);
            break;
        case 'U':
            printf("yes %c is a vowel",word);
            break;
        default:
            printf("Sorry %c is not a vowel", word);
        
    }
    return 0;
}


