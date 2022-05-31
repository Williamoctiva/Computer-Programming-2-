#include<stdio.h>

int main()
{
    int one,two,three,four,five;
    int sum,ans,div,total;
    printf("Enter Five Numbers:\n");
    scanf("%d",&one);
    scanf("%d",&two);
    scanf("%d",&three);
    scanf("%d",&four);
    scanf("%d",&five);
    
    sum=one+two+three+four+five;
    ans=sum;
    div= sum/5;
    total=div;
    printf("Average: %d",total); 
    
    
    return 0;
}