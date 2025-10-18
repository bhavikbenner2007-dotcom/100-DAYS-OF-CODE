#include <stdio.h>

int main(){
float radius , circumference , area ;
 printf("ENTER THE RADIUS OF CIRCLE\n");
 scanf("%f",&radius);
circumference = 2.0 * 3.14 * radius ;
printf("THE CIRCUMFERENCE OF CIRCLE IS %f\n",circumference);
area = 3.14 * radius * radius ;
printf("THE AREA OF CIRCLE IS %f\n",area);
return 0 ;
}
