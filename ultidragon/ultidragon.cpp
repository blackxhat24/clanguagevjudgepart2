#include <stdio.h>

void merge(int ajaib[],int left, int middle, int right)
{
	int i,j,l;
	int	temp1 = middle - left + 1;
	int temp2 = right - middle;
	
	int kiri[temp1],kanan[temp2];
	
	for(i=0;i<temp1;i++)
	{
		kiri[i] = ajaib[left+i];
	}
	for(j=0;j<temp2;j++)
	{
		kanan[j] = ajaib[middle+1+j];
	}
	i = 0;
	j = 0;
	l = left;
	while(i < temp1 && j < temp2)
	{
		if(kiri[i] <= kanan[j])
		{
			ajaib[l] = kiri[i];
			i++;
		}
		else
		{
			ajaib[l] = kanan[j];
			j++;
		}
		l++;
	}
	while(i<temp1)
	{
		ajaib[l] = kiri[i];
		i++;
		l++;
	}
	while(j<temp2)
	{
		ajaib[l] = kanan[j];
		j++;
		l++;
	}
}
void sorting(int ajaib[],int left,int right)
{
	if (left < right) 
    { 
        
        int middle = left+(right-left)/2; 
  
        
    	sorting(ajaib, left, middle); 
        sorting(ajaib, middle+1, right); 
  
        merge(ajaib, left, middle, right); 
    } 
}
int biner(int ajaib[],int jumlah,int awal,int akhir)
{
	int middle =awal+(akhir-awal)/2;
	if(akhir < awal)
	{
		return middle;
	}
	else if(jumlah == ajaib[middle])
	{
		return middle+1;
	}
	else if(jumlah < ajaib[middle])
	{
		return biner(ajaib,jumlah,awal,middle-1);
	}
	else if(jumlah > ajaib[middle])
	{
		return biner(ajaib,jumlah,middle+1,akhir);
	}
	return -1;
}
int main()
{
	int orang,kasus,ajaib[100000],i,k,jumlah,count,index=0;
	scanf("%d %d",&orang,&kasus);
	for(i=0;i<orang;i++)
	{
		scanf("%d",&ajaib[i]);
	}
	sorting(ajaib,0,orang-1);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d",&jumlah);
		count = 0;
		index = biner(ajaib,jumlah,0,orang-1);
		printf("%d\n",index);
	}
}
