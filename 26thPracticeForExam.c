#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/* dynamiclly memory allocate karke functions chalana*/
/*
int palindrome();
int sum_eq();
int countt();
int rev();

int main(){
    int n;
    scanf("%d", &n);
    int *p;

    p = (int*) calloc(n , sizeof(int));
    
    for(int i = 0; i < n; i++){
        scanf("%d", &p[i]);
    }


    for(int i = 1; i < n; i++){

        if(sum_eq(p[0]) == sum_eq(p[i]) && countt(p[0]) == countt(p[i])){
            
            if(palindrome(p[i]) == 0){
                printf("%d \n", rev(p[i]));
            }
            else{
                printf("%d palindrome so didint reverse \n", p[i]);
            }
        }
        
        else{
            continue;
        }
        
    }
    free(p);
    return 0;
}


int palindrome(int a){
    int count=0 , b , c , rem , newN=0;
    b = a;
    c = a;
    while(a!=0){
        a /= 10;
        count++;
    }
    
    while(b!=0){
        --count;
        int power = 1;
        for(int i = count; i>=1; i--){
            power *= 10;    
        }
        rem = b % 10;
        b = (b - rem)/10;
        newN += rem * power;
    }

    if(newN == c){
        return 1;
    }
    else{
        return 0;
    }
}

int sum_eq(int a){
    int rem,sumD=0;
    do{
        rem = a % 10;
        a = (a - rem)/10;
        sumD += rem;
    }while(a!=0);

    return sumD;
}

int countt(int a){
    int count=0;
    while(a!=0){
        a /= 10;
        count++;
    }
    return count;
}

int rev(int a){
    int b,rem,count = 0,newN = 0;
    b = a;
    while(a!=0){
        a /= 10;
        count++;
    }

    while(b!=0){
        --count;
        int power = 1;
        for(int i = count; i>=1; i--){
            power *= 10;    
        }
        rem = b % 10;
        b = (b - rem)/10;
        newN += rem * power;
    }
    return newN;
} 
*/

/* dynamic memory allocation karke finding largst number */
/*int main(){
    int n;
    scanf("%d", &n);
    int *p;
    p = (int*)calloc(n,sizeof(int));
    for(int i = 0; i<n; i++){
     // scanf("%d", &p[i]);

// ya fir

        scanf("%d", p + i);     //because p is address and p+0 (1st iteration) is address of index 0 
                                //(which also is same as p) so since here its all about address so no &   
    }

    int big = p[0];
    for(int i = 0; i<n; i++){       
        if(p[i] > big){
            big = p[i];
        // ya fir
            big = *( p + i); // p+i is address, so to point the address (which menas pointing towards location address)
                            // we have to put *(p+i) it will point towards address and there value will get stored, samaj aaram se

        }
        else{
            continue;
        }
    }
    printf("%d" , big);    
    free(p);
    return 0;
}
*/

/* To access array elements using pointers*/
/*
int main(){
    int num[5];
    for(int i = 0; i < 5; i++){
        scanf("%d ", &num[i]);
        // or
      //  scanf("%d", num + i); // num + i will act as address similar to dynamic memry cases
    }

    for(int i = 0; i < 5; i++){
        printf("%d \n", *(num+i)); // useage of *  points to the address of num + i;
    }

    return 0;
}
*/

/* %d when used to print a character, then its ASCII value is returned*/
// iss %d , %f , %c etc ko format specifiers kehte hai so google em


/* swith cases */
// calculator ka eg where we take + - / etc as character and perform operations on the basis of cases.
// imp pt :- default statement


/* goto jump mil jaega google pe*/

/* Array and ptrs and how same they are*/
/*int main()
{
	int arr[] = { 1, 2, 3, 4, 5 };
	int* ptr;
	ptr = arr;
	for (int i = 0; i < 5; i++) {
		printf("%d \n", ptr[i]);
        printf("%d\n", *(arr+i) );
        printf("%d\n", *(ptr+i) );
        printf("%d \n", arr[i]);

    // they all are same!	
	}
}*/

