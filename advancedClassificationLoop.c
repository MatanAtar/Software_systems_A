#include <stdio.h>
#include <math.h>
#include "NumClass.h"

int isArmstrong(int a){
   int tmp =a,counter =0, ans=0;
   while (tmp>0)
   {
       counter++;
       tmp=tmp/10;
   }
   tmp=a;
while(tmp>0){
int s=tmp%10;
ans =ans+pow(s,counter);
tmp=tmp/10;
}
if(ans==a){
    return 1;
}
    return 0;
}

int isPalindrome(int a){
int org=a, rev=0,tmp;

while (org!=0)
{
    tmp=org%10;
    rev=rev*10+tmp;
    org=org/10;
}
if(rev==a){
    return 1;
} else{
    return 0;
}

}




