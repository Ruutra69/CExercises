//write a function that searches 
//the max value of all integers entered and returns that max value to the 
//main function.

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
    int max();
}

int max(void)
{
    int getallen[10];
    printf("Geef 10 gehele getallen:\n");
    
    for(int i=0;i<10;i++)
    {
        scanf("%d", &getallen[i]);
    }

    int max;
    for(int i=0;i<10;i++)
    {
        if(getallen[i]>getallen[i+1])
        {
            max = getallen[i];
        }
    }
    return max;
}