#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
    float latitude1, latitude2, longitude1, longitude2, d, R = 6371, pi = 3.14, difference;

    printf("Enter the latitude of location A: ");
    scanf("%f", &latitude1);

    printf("Enter the longitude of location A: ");
    scanf("%f", &longitude1);

    if (latitude1 >= -90 && latitude1 <= 90 && longitude1 >= -180 && longitude1 <= 180)
    {
        printf("Origin:  \t (%f, %f) \n", latitude1, longitude1);
    }
    else 
    {
        printf("Your input is not correct");
    }
    printf("Enter the latitude of location B: ");
    scanf("%f", &latitude2);

    printf("Enter the longitude of location B: ");
    scanf("%f", &longitude2);

    if (latitude2 >= -90 && latitude2 <= 90 && longitude2 >= -180 && latitude2 <= 180)
    {
        printf("Distination: \t (%f, %f) \n", latitude2, longitude2);
    }
    else
       {
         printf("Your input is not correct");
       }
    latitude1 = latitude1 / 180 * pi;
    latitude2 = latitude2 / 180 * pi;
    longitude1 = longitude1 / 180 * pi;
    longitude2 = longitude2 / 180 * pi;

    difference = longitude2 - longitude1;

    d = acos((sin(latitude1)) * (sin(latitude2)) + (cos(latitude1)) * (cos(latitude2)) * (cos(difference))) * R;
    printf("Air distance is %f kms",d);

    return 0;
}
