#include <stdio.h>
#include<math.h>
#include "NumClass.h"

int checkArmStrong(int a, int counter, int power){
  if(counter==0){
    int tmp=a;
  while(tmp>0){
    tmp=tmp/10;
    power++;
  }
  counter++;
  }
  while(a>0){
    return pow(a%10,power)+checkArmStrong(a/10,counter,power);
  }
return 0;
}
 
int isArmstrong(int a){

  if(a==checkArmStrong(a,0,0))
  return 1;
  else
return 0;
}



int reverse(int num)
{
    /* Find number of digits in num */
    int digit = (int)log10(num);
    
    /* Recursion base condition */
    if(num == 0)
        return 0;

    return ((num%10 * pow(10, digit)) + reverse(num/10));

}

int isPalindrome(int a){
if(a == reverse(a))
    {
        return 1;
    }
    
    return 0;
}


