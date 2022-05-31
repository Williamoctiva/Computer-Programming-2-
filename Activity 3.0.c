#include<stdio.h>

int main()
{
    int marks[10],i,n,sum, Total;
    
    printf("Enter the size of the arrays:");
    scanf("%d",&n);
    
    if(n<=10){
       if(n>=5){
       for(i=0; i<n; ++i){
        printf("Enter Elements %d:",i+1);
        scanf("%d",&marks[i]);
        sum+=marks[i];
       }
    }
    Total= sum;
    printf("Sum of all array elements = %d", Total);
    
    return 0;
    }

 }