/* Intro To Array */
#include <stdio.h>

// int a[10];
// int has 2 bytes of memory for 1 element
// Since i gave an arrray value 10 hence a total of 2 * 10 = 20 bytes spaced is alocated for variavle 'a'

/* Q1. Read n integers and find max,min,count even and odd number in the array*/

int main(){
    int n,max,min, cOdd = 0,cEven = 0;
    printf("Enter numbers: ");
    scanf("%d", &n);
    int a[n];

    // For appending values in array
    for(int i = 0; i<n; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    min = a[0];
    // For finding max Number
    for(int j = 1; j<n; j++){
        if(max < a[j]){
            max = a[j];
        }
        else if(max >= a[j]){
            continue;
        }
    }
    printf("The max Value Would Be : %d \n", max);

    // For Min 
    for(int j = 1; j < n; j++){
        if(min >= a[j]){
            min = a[j];
        }
        else if(min < a[j]){
            continue;
        }
    }   
    printf("The min Value Would Be : %d \n", min);

    // For No. Of Even Number
    for(int i = 0; i<n; i++){
        if(a[i]%2 == 0){
            cEven++;
        }
        else{
            cOdd++;
        }
    }
    printf("number of even numbers %d \n number of odd numbers %d", cEven,cOdd);

    return 0;
}