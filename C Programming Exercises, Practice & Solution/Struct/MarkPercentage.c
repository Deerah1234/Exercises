#include <stdio.h>

struct student
{
    int rollno;
    char name[50];
    float chem_marks;
    float phy_marks;
    float math_marks;
};

int main(void)
{
    struct student s[5] = {
        {1, "Joel", 50, 80, 90},
        {2, "Chidera", 40, 70, 100},
        {3, "David", 30, 60, 80},
        {4, "Joe", 40, 60, 80},
        {5, "Fred", 30, 50, 70}
        };
    
    int i;
    for (i = 0; i < 5; i++)
    {
        printf("Info for student %d\n", i+1);
        printf("---------------------\n");
        printf("Rollno.: %d\n", s[i].rollno);
        printf("Name: %s\n", s[i].name);
        /* Percentage = marks / numbersOfQuestion * 100 */
        printf("Chemistry(%%): %f%%\n", (s[i].chem_marks/100) * 100);
        printf("Physic(%%): %f%%\n", (s[i].phy_marks/100) * 100);
        printf("Maths(%%): %f%%\n", (s[i].math_marks/100) * 100);
    }
    return(0);
}
