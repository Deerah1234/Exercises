#include <stdio.h>

// A --> B
// distance [KM]
// speed [KM/H]
// distance = speed * time
// time =  distance / speed
int main(void)
{
    int distnace = 300; // KM
    int speed = 80; // KM/H
    int hours = distnace / speed;
    float speedInMinutes = speed / 60.0; // KM/M
    float remainningMinutes = (distnace % speed) / speedInMinutes; // [Min] Units

    printf("The time from A to B will take %d hours and %.2f minutes\n", hours, remainningMinutes);
    return (0);
}