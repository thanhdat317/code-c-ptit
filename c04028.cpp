#include<stdio.h>
#define nhap(n) scanf("%d",&n);
#define xuat(n) printf("%d ",n);
int main()
{
	int n,i,j,buoc=0,k;
	nhap(n);
	int a[n];
	for(i=0;i<n;i++)
	{
		nhap(a[i]);
	}
	printf("Buoc %d: %d\n",buoc++,a[0]);
	for(i=1;i<n;i++)
	{
		int t=a[i];
		j=i-1;
	
		while(j>=0&&a[j]>t)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
		printf("Buoc %d: ",buoc++);
		for(k=0;k<=i;k++)
		xuat(a[k]);
		printf("\n");
	}
	
}
