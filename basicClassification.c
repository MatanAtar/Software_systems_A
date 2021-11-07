#include <stdio.h>
#include <math.h>
#include "NumClass.h"


int factorial (int a){
    int ans =1;
  for (int i = 1; i <= a; i++)
  {
     ans=ans*i;
  }
  
    return ans;

}

int isPrime (int a){
    int i, flag =1;
    for ( i = 2 ; i <= sqrt(a); i++)
    {
        if(a%i==0){
        flag= 0;
        break;
        } 
    }
        if (flag==0){
            return 0;
        } else{
            return 1;
        }
    
}

int isStrong(int a) {
    if(a==0)
    return 0;
int tmp = a;
int ans=0;
while(a>0){
    int s = a%10;
    ans=ans+factorial(s);
    a=a/10;
}
if(ans==tmp)
return 1;
return 0;
}


