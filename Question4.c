#include <stdio.h>

int main() {
    int length, breadth, area, perimeter;

   
    printf("Enter length of rectangle: ");
    scanf("%f", &length);
    printf("Enter width of rectangle: ");
    scanf("%f", &breadth);

   
    area = length * breadth;
    perimeter = 2 * (length + breadth);

   
    printf("Area of rectangle: %.2f\n", area);
    printf("Perimeter of rectangle: %.2f\n", perimeter);
    return 0;
}