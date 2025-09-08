#include <stdio.h>
int main() {
    int radius;
    float area;
    float circumference;
    printf("Radius :");
    scanf("%d",&radius);
    area = radius*radius*3.14;
    printf("The area of the circle is : %f\n",area);
    circumference = area / radius * 2;
    printf("The circumference of the circle is : %f\n",circumference);
    return 0;
}