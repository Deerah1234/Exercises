#include <stdio.h>

int main(int argc, char const *argv[])
{
    if (argc != 2)
    {
        printf("Usage: %s filename", argv[0]);
    }

    else 
    {
        FILE *file = fopen(argv[1], "r");

        if (file == NULL)
        {
            printf("could not open file");
        }

        else
        {
            char ch;

            while ((ch = fgetc(file)) != EOF)
            {
                printf("%c", ch);
            }
        }

        fclose(file);
    }
    return 0;
}
