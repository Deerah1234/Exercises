#include <stdio.h>

int main(void)
{
    float height;

    printf("   Program to check whether a candidate can cast a vote or not\n");
    printf("-----------------------------------------\n");

    printf("Enter Your age: ");
    scanf("%f", &height);

    if (height < 150.0)
        printf("The person is Dwarf");
    else if ((height >= 150.0) && (height < 165.0))
        printf("The person is Avarage height. \n");
    else if ((height >= 165.0) && (height <= 195.0))
        printf("The person is Tall. \n");
    else
        printf("Abnormal height.\n");
    
    return (0);
}