#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<Windows.h>

int main(void) {
	printf("Dit programma bouwt een omgekeerde toren!! \n");	
	torenbouwen();
}
int torenbouwen(void)
{
	int i, j, k, l, m;
	
	printf("Geef een getal voor de zijde van de eerste vierkant:\n");
	scanf("%d", &k);
	m = 0;
	for(l=k; l > 0;)
	{
		
		for(j=0;j<=l;)
		{
			for(i=0;i<=l;)
			{
				printf("■");
				i += 1;
				
			}
			if ( m > 0)
			{
				printf(" ");
				m -= 1;
			}
			printf("\n");
			j += 1;
			
		}
		j, i = 0;
		m += 1;
		l -= 2;
		
	}
}
