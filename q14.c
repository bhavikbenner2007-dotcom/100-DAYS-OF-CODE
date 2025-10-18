 // Write a program to input a character and check whether it is a vowel or consonant using if–else

#include<stdio.h>
  int main(){

 char n ;

printf("ENTER THE CHARACTER");
scanf("%c",&n);

if( n=='a' || n=='e' || n=='i' || n=='o' || n=='u' || n=='A' || n=='E' || n=='I' || n=='O' || n=='U'){
    printf("THE CHARACTER IS A VOWEL");
}else
  printf("THE CHARACTER IS A CONSONENT");

return 0 ;

}
