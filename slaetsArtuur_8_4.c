//Repeat exercise 8.3 but this time for palindrome sentences. 
//examples: “Was it a car or a cat I saw?” or “Eva, can I stab bats in a 
//cave?” (note that punctuation, capitalization and spaces are ignored) 
#include <stdio.h>
#include <string.h>

void isPalindrome(char str[])
{
	int l = 0;
	int h = strlen(str) - 1;

	while (h > l)
	{
		if (str[l++] != str[h--])
		{
			printf("%s is not a palindrome\n", str);
			return;
		}
	}
	printf("%s is a palindrome\n", str);
}

int main()
{
    char str[50];
	printf("Give a sentence:\n");
    scanf("%s", str);
    isPalindrome(str);
	return 0;
}
