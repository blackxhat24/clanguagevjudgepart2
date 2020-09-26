#include <stdio.h>

int main()
{
	unsigned long long angka[10000];
	int i=0,count=0,max=0,min=1000000,range=0;
	double mean = 0 ,sum = 0;
	
	FILE *fp;
	fp = fopen("testdata.in","r");
	while(!feof(fp))
	{
		fscanf(fp,"%llu ",&angka[i]);
		count++;
		sum = sum + angka[i];
		if(min > angka[i])
		{
			min = angka[i];
		}
		if(max < angka[i])
		{
			max = angka[i];
		}
		i++;
	}	
	fclose(fp);
	mean = sum / count;	
	range = max - min;
	printf("Count : %d\n",count);
	printf("Sum   : %.lf\n",sum);
	printf("Mean  : %.2lf\n",mean);
	printf("Min   : %d\n",min);
	printf("Max   : %d\n",max);
	printf("Range : %d\n",range);
}
