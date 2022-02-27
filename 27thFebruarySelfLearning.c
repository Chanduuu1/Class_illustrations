#include <stdio.h>

/* def functions */
double cube(double num){
    return (num * num * num);            // Return will also break out of the function
}

int main(){
    printf("answer : %f", cube(3.0));
}


/* Structs.. */
struct Student{
    char name[50];                      // what is a string = An array of character. so..
    char major[50];
    int age;
    double gpa;
}

int main(){
    struct Student student1;            //Student1 is a container which will store value of struct
    student1.age = 22;                  //these are similar to srrays since they both are ontainers.
    student1.gpa = 3.2;
    strcpy(student1.name, "Pam");       //strcpy just copies the string in argument 2 to argument 1
    strcpy(student1.major, "Arts");     // Ye kyu karna pada aage jaakr clear ho jaega.
    return 0;
                                        // I can use it as contaier, use it in functions, use for condition making etc etc...
}


/* Building a guessing game. */
int main(){
    int secretNumber = 5, guess , a = 0;
    printf("you pnly have 5 guesses All the best");
    while(guess != secretNumber && a <5 ){
        printf("\nEnter your Guess: ");
        scanf("%d", &guess);
        a++;
    }
    if (guess == secretNumber){
        printf("yay you guessed it right");
    }
    else{
        printf("Oops You Ran out of chances.");
    }
    return 0;
}

/* Acessing memory addresses */
// We store values in variable, but the computer it saves the value in the physical memory RAM
// So everytime we call a variable the comp will go for tthe physical memory address and from there it will
//return the value we want.
//They are usefull thats why they are imp


