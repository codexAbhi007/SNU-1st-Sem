//To Calculate area of a triangle when three sides are given

#include <stdio.h>
#include <math.h>

int main()
{
    float a, b, c, s, area;

    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a + b > c && a + c > b && b + c > a)
    {

        s = (a + b + c) / 2.0;

        area = sqrt(s * (s - a) * (s - b) * (s - c));

        printf("The area of the triangle is: %.2f\n", area);
    }
    else
    {

        printf("The given sides do not form a valid triangle.\n");
    }

    return 0;
}
