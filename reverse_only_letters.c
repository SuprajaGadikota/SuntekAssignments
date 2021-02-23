#include <stdio.h>
#include <string.h>
#include <stdbool.h>
char * reverseOnlyLetters(char * S){
    int i = 0;
	int j = strlen(S) - 1;

	while (i < j)
	{
        if (!isalpha(S[i]))
			i++;
		else if (!isalpha(S[j]))
			j--;
		else 
		{
			char temp = S[i];
			S[i] = S[j];
			S[j] = temp;
			i++;
			j--;
		}
	}
	return S;
}
int main()
{
	char input[10];
	scanf("%s",input);
    	reverseOnlyLetters(input);
   	return 0;
}