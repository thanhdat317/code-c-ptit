#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
int cmp1(const void *a, const void *b){
	int *x= (int*)a;
	int *y= (int*)b;
	if(*x<*y) return -1;
	return 1;
}
int cmp2(const void *a, const void *b){
	int *x= (int*)a;
	int*y = (int*)b;
	if(*x<*y) return 1;
	return -1;
}
int main(){
	int t;
	scanf("%d", &t);
	for(int j = 1; j<=t; j++){
		int n;
		scanf("%d", &n);
		int a[n], b[n];
		for(int i = 0 ; i< n; i++){
			scanf("%d",&a[i]);
		}
		for(int i = 0 ; i< n; i++){
			scanf("%d",&b[i]);
		}
		qsort(a,n,sizeof(int),cmp1);
		qsort(b,n,sizeof(int),cmp2);
		printf("Test %d:\n",j);
		for(int i = 0; i<  n; i++){
			printf("%d %d ",a[i], b[i]);
		}
		printf("\n");
	}
}
