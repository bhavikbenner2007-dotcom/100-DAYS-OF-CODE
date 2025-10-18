//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character

#include<stdio.h>
  int main(){

char n ;

 printf("ENTER THE CHARACTER");
 scanf("%c",&n);

 if(n>='A' && n<='Z'){
    printf("UPPERCASE");
 }else if(n>='a' && n<='z'){
    printf("LOWERCASE");
 }else if(n>='0' && n<='9'){
    printf("DIGIT");
 }else{
    printf("SPECIAL CHARACTER");
  }
return 0 ;

  }
