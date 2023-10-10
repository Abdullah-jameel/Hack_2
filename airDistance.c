#include<stdio.h>
#include<math.h>

int main(int argc, char const *argv[])
{
    float latitude1, latitude2, longitude1, longitude2, d, R = 6371;
    printf("Enter the latitude of location A: ");
    scanf("%f",&latitude1);
    printf("Enter the longitude of location A: ");
    scanf("%f",& longitude1);
    printf("Origin:  \t (%f, %f)",latitude1,longitude1);
    printf("Enter the latitude of location B: ");
    scanf("%f",&latitude2);
    return 0;
}
