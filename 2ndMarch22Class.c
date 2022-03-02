/* Multi-dimension Array in C */
#include <stdio.h>
int main(){
    int a[3][3]; //Defining space needed. array ke andar 3 araay and harr array ke andar 3 value
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}

/* make a matrix and return each row's and columns GTotal */
#include <stdio.h>
int main(){
    int sum = 0,a[3][3]; //Defining space needed. array ke andar 3 araay and harr array ke andar 3 value
    for(int i =0; i<3; i++){
        for(int j = 0; j<3; j++){
            scanf("%d",&a[i][j]);
        }
    }
    // For row Sum
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d ", a[i][j]);
            sum += a[i][j];
        }
        printf("  %d\n", sum);
        sum = 0;
        printf("\n");
    }
    
    // For Column Sum
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            sum += a[j][i];
        }
        printf("%d ", sum);
        sum = 0;
    }
    return 0;
}

/* Matrix Multiplication */
//Would upload it as moodle illustration.