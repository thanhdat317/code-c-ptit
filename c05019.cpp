#include<stdio.h>
#include<math.h>
#define N 100001
int main()
{
	int snt[401],id=0;
	int sangsnt[N];
	sangsnt[0]=sangsnt[1]=0;
	for(int i=2;i<N;i++)
	{
		sangsnt[i]=1;
	}
	for(int i=2;i<sqrt(N);i++)
	{
	for(int j=i+i;j<N;j+=i)
	{
	sangsnt[j]=0;
	}
}

for(int i=0;i<N;i++)
{
	if(sangsnt[i])
	{
		
		snt[id++]=i;
		if(id>400) break;
	}
}
    int t;
    scanf("%d", &t);
    for(int k = 1 ; k<=t; k++){
		int n;
	scanf("%d",&n);
	int a[n][n];
	int c1=0,c2=n-1,h1=0,h2=n-1;
	int dem =0;
	while(dem< n*n){
		for(int i = c1; i<= c2; i++){
			a[h1][i]=snt[dem++];
		}
		h1++;
		for(int i = h1 ;i<=h2; i++){
			a[i][c2]=snt[dem++];
		}
		c2--;
		for(int i = c2; i>=c1; i--){
			a[h2][i]=snt[dem++];
		}
		h2--;
		for(int i = h2; i>=h1; i--){
			a[i][c1]=snt[dem++];
		}
		c1++;
	}
	printf("Test %d:\n",k);
	for(int i = 0 ; i< n ; i++){
		for(int j = 0 ; j< n ; j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
}
