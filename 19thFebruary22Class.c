/* getting user inputs */
#include <stdio.h>
int main()
{
    int age;  // variable jisme me user input store karnga
    printf("Enter your age:  ");
    scanf("%d", &age);   // %d scanf ko bata raha hai ki input ka as a int consider kare. & bata raha ki input le and then stroe it in age variable
                         // & ek pointer ya kuch hai aage aagaye dw
    printf("you are %d years old :)");


    char grade;
    printf("enter your grade: ");
    scanf("%c", &grade);  //%c is for input of char data type.
    printf("Your grade is %c" , grade);
    return 0;

    double num1;
    printf("enter the number:");
    scanf("%lf", &num1);    //scanf me %lf likte hai sirf f nai.
    printf("%f", num1 + num1); // yaha apna normal %f reason scanf and printf are different xD.
}

/* Buildinig madlibs game */
#include <stdio.h>
int main()
{
    char noun[20];
    char name[20];
    char verb[20];
    char place[20];
    printf("enter a noun: ");
    scanf("%s", noun);
    printf("enter a name: ");
    scanf("%s", name);
    printf("enter a verb: ");
    scanf("%s", verb);
    printf("enter a place: ");
    scanf("%s", place);
    printf("There once lived a %s whose name was %s \n",noun, name);
    printf("he used to %s all day long \n",verb);
    printf("he lived in %s",place);
    return 0;

}