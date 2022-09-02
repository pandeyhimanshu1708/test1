// WAP to find the area of the circle. Take radius of circle from user as input and print the
// result in below given format.
#include<stdio.h>
#include<conio.h>
int main()
{
    float r,area,pi;
    printf("Enter the radius of the circle:");
    scanf("%f",&r);
    pi=3.14;
    area=pi*r*r;
    printf("Area of the circle is %f",area);
    return 0;
}