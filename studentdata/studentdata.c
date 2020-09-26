#include <stdio.h>
#include <string.h>

int main()
{
	int i,j,input,banyak,minta,k,count=0,temp=0;
	
	scanf("%d",&input);
	
	struct data
	{
		int angka;
		int tanggal,bulan,tahun;
		char nama[11],tinggal[11];
	}student[input];

	for(i=0;i<input;i++)
	{
		scanf("%d %d %d %d %s %s",&student[i].angka,&student[i].tanggal,&student[i].bulan,&student[i].tahun,student[i].nama,student[i].tinggal);
	}
	
	scanf("%d",&banyak);
	
	for(j=0;j<banyak;j++)
	{
		scanf("%d",&minta);
		for(k=0;k<input;k++)
		{
			if(student[k].angka == minta)
			{
				printf("%d. %s was born on %d/%d/%d and live at %s\n",student[k].angka,student[k].nama,student[k].tanggal,student[k].bulan,student[k].tahun,student[k].tinggal);
				break;
			}
		}
		if(student[k].angka != minta)
		{	
			printf("No data found!\n");
		}
	}
	return 0;
}

