#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


int Read(void)
{
    printf("\nEnter the number you want to use for the table of multiplication:");
    scanf("%d", &getal);
    printf("Enter the limit");
    scanf("%d", &limiet);
    if(getal == 0 && limiet == 0)
    {
        printf("Thanks!");
        void exit();
    }
}
int CalcPrint(int getal, int limiet)
{
    int i; 
    int j; 
    int somoneven =0;
    int someven = 0;
        for ( i = 0, j =0; j < limiet ; i++)
        {
            j = getal*i;
        
            if(j%2 == 0)
            {
                someven += j;
            }
            else
            {
                somoneven += j;
            }
            printf("%d  \n", j);
        }
}    
int main(void)
{
    getal =1;
    limiet=1;
    while(getal !=0 && limiet !=0)
    {
        Read();
        CalcPrint(getal, limiet);
        printf("\nThe sum of the even numbers is: %d", someven);
        printf("\nThe sum of the uneven numbers is: %d", somoneven);

    }
}
    