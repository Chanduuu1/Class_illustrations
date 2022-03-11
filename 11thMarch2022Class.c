/* Enumerated data type */
// array jaisa hota hai, yaha privilage SHYD yaha index set kar sakta hu.

/*
enum color{red, blue, green} // default inhe weight assign ho jaega 0,1,2,... respt.
enum level{low=10, avg=20, high=30}
enum pass_grade{no = -1, yes = 1}
enum grade{High = 'S' , Avg = 'M' , Low = 'N'}
*/

#include <stdio.h>
enum color{red,blue,green}; //Globally declared
int main(){
    enum color c1;
    c1 = red;
    printf("%d" , c1);  
    // output will be index (or thw weight if assigned) of red in enum datatype.
    return 0;
}