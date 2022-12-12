#include <stdio.h>
#include <string.h>
int main(void)
{
	char str[100];
	int i,vo=0;
	printf("write a sentance min (25) letters: ");
	scanf("%[^\n]", str);
	for (i=0; str[i]='/0'; i++)
	{
		if (str[i] =='a' || str[i] =='A' || str[i] =='e' || str[i] =='E' || str[i] =='i' ||str[i] =='I' || str[i] =='o' || str[i] =='O' || str[i] =='u' || str[i] =='U');
		vo++;
	}
	printf("vowel is = %d", vo-1);
	
	return 0;
}