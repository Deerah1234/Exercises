#include <stdio.h>
#include <stdlib.h>
#define MAX(a, b) if(a>b) {printf("a is maximum"); printf("\n%d is the value", a);} else {printf("b is maximum"); printf("\n%d is the value", b);}

int main(void)
{
    MAX(2, 3);
}