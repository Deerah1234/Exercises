#include <stdio.h>
#include <stdarg.h>


int add(int count, ...)
{
    va_list va;
    int sum = 0;

    va_start(va, count);
    for (size_t i = 0; i < count; i++)
    {
        sum += va_arg(va, int);
    }
    va_end(va);
    return sum;
    
}
int main(void)
{
    int num[100];
    int option;

    printf("Enter option: ");
    scanf("%d", &option);

    if (option < 1)
    {
        printf("invalid option");
        return(1);
    }
    else
    {
        for (size_t i = 0; i < option; i++)
        {
            printf("Enter num %d: ", i+1);
            scanf("%d", &num[i]);
        }
        switch (option)
        {
            case 2:
                printf("Addition of %d+%d = %d", num[0],num[1], add(option, num[0], num[1]));
                break;
            case 3:
                printf("Addition of %d+%d+%d = %d", num[0],num[1],num[2], add(option, num[0], num[1], num[2]));
                break;
            case 4:
                printf("Addition of %d+%d+%d+%d = %d", num[0],num[1],num[2],num[3], add(option, num[0], num[1], num[2],num[3]));
                break;
            
            default:
                break;
        } 
    }
    
    return (0);
}