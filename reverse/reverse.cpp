#include <stdio.h>
#include <string.h>

int main ()
{
	int kasus;
	int i,j;
	char input[1000];
	
	
	scanf("%d",&kasus);
	
	for ( i = 1; i <= kasus ; i++ )
	{
		scanf("%s", input);
		printf("Case #%d : ",i);
		
		
		
		for (j = strlen(input)-1; j >=0 ; j--)
		{
			printf("%c", input[j]);
		}
		printf("\n");
		
	}
	
	
	
	
	return 0;
}

