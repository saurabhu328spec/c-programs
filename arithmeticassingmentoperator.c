#include <stdio.h>
int main(){

    int a = 10, b = 20, c = 30, d = 40, e = 50;
    
    printf("arithematic operators:\n");
    a += 10;
    b -= 20;
    c *= 30;
    d /= 40;
    e %= 50;
     
    printf("arithematic assignment operators:\n");

    a += 10;
    printf("value of a = %d\n", a);
    b -= 20;
    printf("value of b = %d\n", b);
    c *= 30;
    printf("value of c =%d\n", c); 
    d /= 40;
    printf("value of d = %d\n", d);
    e %= 50;
    printf("value of e = %d\n", e);
    return 0;
}