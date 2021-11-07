#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int main(){
int a, b, tmp;
scanf("%d",&a);
scanf("%d",&b);
printf("The Armstrong numbers are:");
for (int i = a; i <= b; i++)
{
    tmp=isArmstrong(i);
    if(tmp==1){
        printf(" %d",i);
    }
}
 printf("\n");
printf("The Palindromes are:");
for (int i = a; i <= b; i++)
{
    tmp=isPalindrome(i);
    if(tmp==1){
        printf(" %d",i);
    }
}
 printf("\n");
printf("The Prime numbers are:");
for (int i = a; i <= b; i++)
{
    tmp=isPrime(i);
    if(tmp==1){
        printf(" %d",i);
    }
}
 printf("\n");
printf("The Strong numbers are:");
for (int i = a; i <= b; i++)
{
    tmp=isStrong(i);
    if(tmp==1){
        printf(" %d",i);
    }

}
 printf("\n");

return 0;
}