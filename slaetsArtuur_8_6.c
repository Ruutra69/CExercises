#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
"console": "externalTerminal"

char zin[41];
char woord[10];
int readString(void)
{
printf("Geef een zin: ");
gets(zin);

}
int printString(void)
{
    int i;
    int j=0;
for(i=0; zin[i] != ‘\0’){
    zin[i] = woord[j];
    if(zin[i] == " "){
        printf("\n %s", woord);
    j=0;    
    }
    ++j;
    ++i;
}
