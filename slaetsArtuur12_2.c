#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int read(int, int);
int nextday(int, int);
int printday(int, int);
int main(void)
{
	int dag;
	enum maanden maand;
	enum maanden
	{
		JAN = 1, FEB, MAR, APR, MAY, JUN,
		JUL, AUG, SEP, OCT, NOV, DEC
	};
	
	read(dag, maand);
	nextday(dag, maand);
	printday(volgendedag, volgendemaand);
}
int read(dag, maand)
{
	
	printf("Geef een dag en maand in getallen:\n");
	scanf("%d%*c%d", &dag, &maand);
	return(dag, maand);
}



int nextday(dag, maand)
{
	int volgendedag;
	enum maanden volgendemaand;
 
	return volgendedag, volgendemaand;
}
int printday(volgendedag, volgendemaand)
{
	return 0;
}