#include<stdio.h>

int main()
{
    char inputString[255];
    int index = 0;
    int i,vowels, consonants;
   
   
    printf("Input string:");
    gets(inputString, sizeof inputString, stdin);
    
    while(inputString [index] != '\0')
    {
     if (inputString[index] == 'a' || inputString[index] == 'e' ||
        inputString[index] == 'i' || inputString[index] == 'o' ||
        inputString[index] == 'u') 
        {
        inputString[index] = inputString [index] - 32;
        }
        index++;
    }
    for(i=0; inputString [i]!='\0';++i)
    {
        if(inputString [i]=='a' || inputString [i]=='e' || inputString[i]=='i' || inputString[i]=='o' || inputString [i]=='u' || inputString [i]=='A' || inputString [i]=='E' || inputString [i]=='I' || inputString [i]=='O' || inputString [i]=='U')
            ++vowels;
        else if((inputString [i]>='a'&& inputString [i]<='z') || (inputString [i]>='A'&& inputString [i]<='Z'))
            ++consonants;
            }
    printf("\nstring converted:");
    puts(inputString);
    printf("\nString Length : %d \n", index );
    printf ("\nVowels: %d\n",vowels);
    printf("\nConsonants: %d\n", consonants);
    return 0;
}