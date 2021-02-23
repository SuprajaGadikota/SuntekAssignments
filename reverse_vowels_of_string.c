#include <stdio.h>
#include <string.h>
#include <stdbool.h>
bool isvowel(char c){
    if ((c == 'A' || c == 'a') ||(c == 'E' || c == 'e') ||(c == 'I' || c == 'i') ||(c == 'O' || c == 'o') ||(c == 'U' || c == 'u')){
		return true;
    }
	return false;
}
char * reverseVowels(char * s){
	int i = 0;
	int j = strlen(s) - 1;

	while (i < j)
	{
		if (!isvowel(s[i]))
			i++;
		if (!isvowel(s[j]))
			j--;

		if (isvowel(s[i]) && isvowel(s[j]))
		{
			char temp = s[i];
			s[i] = s[j];
			s[j] = temp;
			i++;
			j--;
		}
	}
	printf("%s",s);
}
int main()
{
	char input[10];
	scanf("%s",input);
    	reverseVowels(input);
   	return 0;
}
