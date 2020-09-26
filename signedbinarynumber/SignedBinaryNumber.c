 #include <stdio.h>
 #include <string.h>
 
 int main()
 {
 	int k,kasus,i;
 	char input[34];
 	
 	scanf("%d",&kasus);
 	for(k=1;k<=kasus;k++)
 	{
 		long long hasil =0,j=1;
 		scanf("%s", input);
 		for(i=strlen(input)-1;i>=0;i--)
 		{
 			if(input[i] == '1')
 			{
 				hasil = hasil + j;
 			}
 			if(input[i] == ')')
 			{
 				hasil = hasil - j;
				i = i -3;
			}
			j = j*2;
		}
		printf("Case #%d: %lld\n",k,hasil);
 	}
	return 0;
 }
