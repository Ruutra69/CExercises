// C++ program to convert seconds
// into days, hours,minutes,seconds
#include <stdio.h>

// function convert second into day
// hours, minutes and seconds
void ConvertSectoDay(int n)
{
	int day = n / (24 * 3600);

	n = n % (24 * 3600);
	int hour = n / 3600;

	n %= 3600;
	int minutes = n / 60 ;

	n %= 60;
	int seconds = n;
	
printf("%d seconden is gelijk aan:%d dagen, %d uren, %d minute, %d seconden",n, day, hour, minutes, seconds);
}

int main()
{
    int n;
printf("Geef een aantal seconden:");
scanf("%d", &n);
	ConvertSectoDay(n);
	return 0;
}
