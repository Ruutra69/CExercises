//Write the function print_string to finalize the next program. 
#include <stdio.h> 
#include <string.h> 
#define MAXSTRING 100 
 
  void print_string(char* string);
 
  int main(void) 
  { 
 
    char s1[MAXSTRING]= "Mary, Mary, quite contrary.\n"; 
    char s2[MAXSTRING] = "How does your garden grow?\n"; 

    print_string(s1); 
     print_string(s2); 

  } 
void print_string(char* string)
    {
    printf("%s", string);
    }
