// Strucutre continue

#include <stdio.h>
struct complex_no{
    float real;
    float img;
};

int main(){
    struct complex_no c1 = {2.3,4.5};
    struct complex_no *pStruct; //just given variable its data type
    pStruct = &c1;
    printf("%.2f\t %.2f\n" , c1.real,c1.img);
    printf("%.2f\t %.2f" , pStruct->real,(*pStruct).img);

    return 0;
}