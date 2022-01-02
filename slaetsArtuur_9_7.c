#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
  {
  int i;
  
  for(i=0; i<10; i++)
    {
    printf("Enter student name #%d: ", i+1);
    fgets(name[i], 80, stdin);
    name[i][strlen(name[i])-1] = '\0';  
    }

  printf("\nThe names of the students are:\n");
  for(i=0; i<n; i++)
    printf("name[%d] = \"%s\"\n", i, name[i]);
  return 0;
  }