#include <stdio.h>

int main(void)
{
    int a[] = {10, 11, -1, 56, 67, 5, 4};
    int *p, *q;
    p = a;
    q = &a[0]+3;
    printf("1 = %d %d %d\n", (*p)++, (*p)++, *(++p));
    printf("2 = %d\n", *p);
    printf("3 = %d\n", (*p)++);
    printf("4 = %d\n", (*p)++);

    q--;
    printf("5 = %d\n", (*(q+2))--);
    printf("6 = %d\n", *(p+2)-2);
    printf("7 = %d\n", *(p++ -2) -1);
}

// =================================================
// #include <stdio.h>

// int main(void)
// {
//     char str[] = "welcome to jenny's lectures";
//     char *ptr = str;

//     printf("1= %c\n", *ptr);
//     printf("2 = %c\n", *(ptr++ +1));
//     printf("3 = %c\n", *((ptr-- +5)-1)+3);
//     printf("4 = %c\n", *(++ptr +10)-32);
//     printf("5 = %c %c %c\n", *ptr, *++ptr, *--ptr);
//     return (0);
// }