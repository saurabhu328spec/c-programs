#include <stdio.h>
int main(){

    int a = 10, b = 20, c = 0;

    printf("logical operators:\n");
    if(a && b)
    {
        printf(" true: logical operator\n");
    }
    if(a || c)
    {
        printf(" true: logical operator\n");
    }
    if(!(c && b))
    {
        printf(" true: logical operator\n");
    }
    return 0;
}