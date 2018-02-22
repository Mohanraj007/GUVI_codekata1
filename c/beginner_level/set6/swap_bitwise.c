#include <stdio.h>
int main(void) 
{
 int i,k1;
 scanf("%d %d",&i,&k1);
    printf(" value of i=%d k1=%d before swapping", i, k1);
    i = i ^ k1;
    k1 = i ^ k1;
    i = i ^ k1;
    printf("\nvalue of i=%d k1=%d after swapping", i, k1);
    return 0;
}
