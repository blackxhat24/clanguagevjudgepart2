#include <stdio.h>

int i,j;
int angka[]= {4,25,31,7,6,9,21,33,44,45,30};

void interpolation()
{
	
}

void bubblesort()
{
	int max = 0;
	int temp = 0;
//	for(i=0;i<11;i++)
//	{
//		if(angka[i] < angka [i+1])
//		{
//			max = angka[i+1];
//		}
//	}
//	for(i=0;i<10;i++)
//	{
//		if(max>angka[i])
//		{
//			temp = angka[i];
//			angka[i] = angka[i+1];
//			angka[i+1]=temp;
//		}
//	}
	for(i=0;i<11;i++)
	{
		for(j=0;j<10-i;j++)
		{
			if(angka[j] > angka[j+1])
			{
				temp = angka[j];
				angka[j] = angka[j+1];
				angka[j+1] = temp;
			}
		}
	}
	for(i=0;i<11;i++)
	{
		printf("%d ",angka[i]);	 
	}
}
void linear()
{
	int search;
	scanf("%d",&search);
	for(i=0;i<10;i++)
	{
		if(angka[i] == search)
		{
			printf("Ada %d\n",i+1);
			break;
		}
	}	
	if(i == 10)
	{
		printf("GAK ADA B***\n");
	}
}
void quicksort()
{
//	int temp = 0;
//	pivot = angka[0];
//	for(i=0;i<10;i++)
//	{
//		for(j=10;j>0;j--)
//		{
//			if(pivot < angka[i])
//			{
//				if(pivot>angka[j])
//				{
//					temp = angka[i];
//					angka[i] = angka[j];
//					angka[j] = temp;
//				}
//			}
//			else
//			{
//				if(pivot> angka[i])
//				{
//					temp = pivot;
//					pivot = angka[i];
//					angka[i] = temp
//				}
//				else if(pivot > angka[j])
//				{
//					temp = angka[i];
//					pivot = angka[j];
//					angka[j] = temp
//				}
//			}
//		}
//	}
}
int main()
{
	int menu;
	do
	{
		printf("1. bubblesort\n");
		printf("2. interpolation\n");
		printf("3. linear\n");
		printf("4. quicksort\n");
		printf("menu:");
		scanf("%d",&menu);
	}while(menu<1 || menu >3);
	if(menu == 1)
	{
		bubblesort();
	}
	if(menu == 2)
	{
		interpolation();
	}
	if(menu == 3)
	{
		linear();
	}
	if(menu == 3)
	{
		quicksort();
	}
}
