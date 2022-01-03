//Write a program that prints the minimum and maximum 
//value of 10 numbers entered by the user. Use only 4 variables in 
//your program. 
 
#define _CRT_SECURE_NO_WARNIGS
#include <stdio.h>

int main(void)
{
    int getallen[10];
    int max;
    int min;
    printf("Geef 10 gehele getallen:\n");
    
    for(int i=0;i<10;)
    {
        printf("Geef een getal :\n");
        scanf("%d", &getallen[i]);
        i+=1;
    }
    min = getallen[0];
    max = getallen[0];
    for(int i=0;i<10;)
    {
        if(getallen[i]<min)
        {
            min = getallen[i];
        }
        if(getallen[i]>max)
        {
            max = getallen[i];
        }
        i+=1;
    }
    printf("Het hoogste getal dat u hebt opgeven is %d\n", max);
    printf("Het laagste getal dat u hebt opgeven is %d", min);
}
