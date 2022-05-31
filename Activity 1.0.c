#include<stdio.h>

int main()
{
    int x,y;
    printf("Enter X:");
    scanf("%d",&x);
    printf("Enter Y:");
    scanf("%d",&y);
    if(y<0){
     printf("%d^%d=1/%.0lf.",x,y,pow(x,-y));
      }else if(y==0){
      printf("%d^0=1.",x);
    }else{
    printf("%d^%d=%.0lf.",x,y,pow(x,y));
    }
    return 0;
}