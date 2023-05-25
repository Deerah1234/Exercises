#include <stdio.h>
#include <stdarg.h>

int max(int num_args, ...);

int main(void)
{
    int max_value;

    max_value = max(3, 10, 45, 30);

    printf("Max value: %d", max_value);
    return (0);
}

int max(int num_args, ...)
{
    int max, i;

    va_list argptr;
    va_start(argptr, num_args);

    for (i = 0; i < num_args; i++)
    {
        int nxt_arg = va_arg(argptr, int);

        if (i == 0)
            max = nxt_arg;
        else if (nxt_arg > max)
            max = nxt_arg;
    }

    va_end(argptr);
    
    return max;
    
}