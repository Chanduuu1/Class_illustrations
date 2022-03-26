// Strucutre continue

#include <stdio.h>
struct complex_no{
    float real;
    float img;
};
void add(struct complex_no x,struct complex_no y){
    printf("%.2f \n", x.real+y.real);
}
int main(){
    struct complex_no c1 = {2.3,4.5};
    struct complex_no c2 = {2.3,4.5};
    struct complex_no *pStruct; //just given variable its data type
    pStruct = &c1;
    printf("%.2f\t %.2f\n" , c1.real,c1.img);
    printf("%.2f\t %.2f\n" , pStruct->real,(*pStruct).img);
    add(c1,c2);
    return 0;
}
