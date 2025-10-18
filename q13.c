//Write a program to input a year and check whether it is a leap year or not using conditional statements.

#include<stdio.h>
int main(){

    int n ;

    printf("ENTER THE YEAR");
    scanf("%d",&n);

    if(  n%4==0 && n%100!=0){
        printf("THE YEAR IS A LEAP YEAR");
    }  else if(n%4!=0){
           printf("THE YEAR IS NOT A LEAP YEAR");
    }  else if(n%400==0){
        printf("THE YEAR IS A LEAP YEAR");
    }else
        printf("INVALID YEAR");

    return 0 ;

}
