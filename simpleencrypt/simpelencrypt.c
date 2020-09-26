#include <stdio.h>
#include <string.h>

char huruf[1001];
int key,i;

void caesar()
{
	if(huruf[i] >= 'A' && huruf[i] <='Z')
	{
		huruf[i] ='A'+(huruf[i]-'A'+key)%26;
	}
	else if(huruf[i] >= 'a' && huruf[i] <='z')
	{
		
		huruf[i]='a'+(huruf[i]-'a'+key)%26;
	}
}

int main()
{
	int k,kasus;
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&key);
		getchar();
		scanf("%[^\n]",huruf);
		for(i=0;huruf[i] != '\0';i++)
		{
			caesar();
		}
		printf("Case #%d: %s\n",k,huruf);
	}	
}
