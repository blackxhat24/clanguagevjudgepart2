	#include <stdio.h>
	
	int main()
	{
		int max = 0;
		int swap = 0;
		int temp = 0;
		int angka[1000]={0};
		int i,j,k;
		
		scanf("%d", &max);
		for(k=0;k<max;k++)
		{
			scanf("%d",&angka[k]);
		}
		for(i=0;i<max-1;i++)
		{
			for(j=0;j<max-i-1;j++)
			{
				if(angka[j] > angka[j+1])
				{
					temp = angka[j];
					angka[j] = angka[j+1];
					angka[j+1] = temp;
					swap++;
				}
			}
		}
		
		printf("%d\n",swap);
	
	}
