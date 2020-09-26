#include <stdio.h>

int main()
{
	int kasus;
	int n;
	int q;
	int a[100001];
	int l;
	int r;
	int i,j,k,m;
	int sum = 0;
	scanf("%d",&kasus);
	for(k=1;k<=kasus;k++)
	{
		scanf("%d %d", &n,&q);
		for(i=1;i<=n;i++) 
		{  
        	scanf("%d",&a[i]);
        }
        for(j=0;j<q;j++)
        {
        	scanf("%d %d", &l, &r);
        	sum = 0;
        	for(m=l;m<=r;m++)
        	{
      			sum = sum + a[m];
      		}
      		printf("%d\n", sum);
   		}
	}
	return 0;
}
