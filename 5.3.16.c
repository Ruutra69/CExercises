#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void torenbouwen();
void printlijn(int, int);
void printvierkant(int, int);

int main(void) 
{
	printf("Dit programma bouwt een omgekeerde toren!! \n");	
	torenbouwen();
}
void torenbouwen(void)
{
	int keuze; //groote van de basis van de toren, die de gebruiker kiest
    int zijde=0; //zijde van de basis van de toren
	int huidigevierkant=0;

	printf("Geef een getal voor de zijde van de eerste vierkant:\n");
	scanf("%d", &keuze);

	for(zijde = keuze; zijde >= 0;)
	{
		huidigevierkant +=1;
        printvierkant(zijde, huidigevierkant);
		zijde -= 2;
		
	}
}
void printvierkant(int zijde, int huidigevierkant)//functie die 1 vierkant print
{
    int lijn;
    for(lijn=0;lijn<zijde;)
	{
        printlijn(zijde,huidigevierkant);
		printf("\n");
		lijn += 1;
			
	}
    
}
void printlijn(int zijde, int huidigevierkant)//functie die 1 lijn print
{
    int blok; 
	int aantalspaties;//aantal spaties dat voor elke lijn moet worden geprint
	for(aantalspaties=0;aantalspaties<huidigevierkant;)
	{
		printf(" ");
		aantalspaties += 1;
	}
    for(blok=0;blok<zijde;)
		{
			printf("■");
			blok += 1;
				
		}
}
