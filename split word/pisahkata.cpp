#include <stdio.h>
#include <string.h>

int main ()
{
	char x[100];
	char y[100];
	int i;
	
	scanf ("%[^\n]",x);
	
	
	
	for(i=0; i<strlen(x); i++)
	{
		if(x[i] != 32)
		{
			printf("%c", x[i]);
		}
		if ( x[i] == 32)
		{
			printf("\n");
		}
	}
	
	return 0;
}
