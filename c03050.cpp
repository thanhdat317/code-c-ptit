#include<stdio.h>
#define N 100001
int main()
{
int n,i,count=0;
scanf("%d",&n);
int a[n],b[n],dem[N];
for(i=0;i<N;i++)
{
	dem[i]=0;
}
for(i=0;i<n-1;i++)
{
	scanf("%d %d",&a[i],&b[i]);
	dem[a[i]]++;
	dem[b[i]]++;
}
int index=0;
for(i=0;i<N;i++)
{
	if(dem[i]>=1)
	{
		count++;
		
	}
	if(dem[i]==n-1)
	{
		index=1;
	}
}
if(index==1&&count==n)
{
	printf("Yes");
}
else{
	printf("No");
}
}

