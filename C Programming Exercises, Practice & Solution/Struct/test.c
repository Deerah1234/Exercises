#include <stdio.h>

struct complex {
    int real;
    int img;
};

struct complex add (struct complex a, struct complex b)
{
    struct complex d;

    d.real = a.real + d.real;
    d.img = a.img + d.img;
    return d;
}

int main(void)
{
    struct complex d1 = {12, 2};
    struct complex d2 = {14, 11};

    struct complex d = add(d1, d2);

    printf("ADD = %d+%di\n", d.real, d.img);
    return (0);
}