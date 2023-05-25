#include <stdio.h>
/* Define a function Marco (MAX(a, b)) */
#define MAX(a, b) if(a>b) {printf("a is maximum"); printf(" = %d\n", a);} else {printf("b is maximum"); printf(" = %d\n", b);}

int main(void)
{   
    printf("Number 1:\n");
    /* Call the function macro (MAX(a, b)) */
    MAX(2, 3);

    /* Undefine the function macro (MAX(a, b)) */
    #undef MAX

    /* Define a new function marco (MAX(a, b)) */
    #define MAX(a, b) if(a>b) {printf("a is maximum"); printf(" = %d", a);} else {printf("b is maximum"); printf(" = %d", b);}

    /* Call the function macro (MAX(a, b)) */
    printf("Number 2:\n");
    MAX(5, 2);

    return (0);
}


