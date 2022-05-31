#include<stdio.h>
#include<stdlib.h>
int main()
{
    char marks[100];
    int i, num;
    FILE *fptr;
    fptr=fopen("C:\\text.txt","w");
    if(fptr==NULL)
    {
       printf("Error!");
       exit(1);
    }
    printf("Inputs how many lines to be appended:");
    scanf("%d",&num);
    if(num<=100){
       for(i=1; i<=num; ++i){
        printf(" ");
        scanf("%s",&marks);
       fputs(marks,fptr);
       fputs("\n",fptr);
       }
    }
    printf(" ");
    fclose(fptr);
     
   
    return 0;
}
