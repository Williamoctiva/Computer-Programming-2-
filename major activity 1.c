#include<stdio.h>

int main()
{
    int grade;
    printf("Enter grade:");
    scanf("%d",& grade);
    
    
    if(grade>=101){
      printf(" ");
    }else if(grade>=92){
      printf("your letter grade is A.\n");
    }else if(grade>=84){
      printf("your letter grade is A-.\n");
    } else if(grade>=76){
      printf("your letter grade is B.\n");
    }else if(grade>=68){
      printf("your letter grade is B-.\n");
    }else if(grade>=60){
      printf("your letter grade is C.\n");
    }else if(grade>=50){
      printf("your letter grade is D.\n");
    }else if(grade>=1){
      printf("your letter grade is F.\n");
    }else if(grade==0){
      printf("Invalid Input. Try Again.");
    }
    return 0;
}