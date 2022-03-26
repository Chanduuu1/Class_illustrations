/* practice session on malloc calloc */
#include <stdio.h>
#include <stdlib.h>
int main(){
    int n,i;
    scanf("%d", &n);
    int *ptr = (int*)calloc(n,sizeof(int)); // compilation ke time space allocate ho jaega, also here on run time ek array banaega jiska address runtime hi banega and woh ptr variable me store ho jaega!, 
                                            // although pointer variable ka khud ka ek different address hoga jo compilation me hi ban jaega but uska values jo hai woh array ka hai jo haar run me change hota hai and ptr me store hota hai!.
    
    for(i=0;i<n;i++){
        scanf("%d", &ptr[i]);
    }
    
    for (i=0;i<n;i++){
        printf("%d\t", ptr[i]);
    }
    return 0;
}