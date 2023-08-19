#include<stdio.h>

int main(){
	int A[1001];
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d",&n);
		for(int i =0; i< n; i++){
			scanf("%d", &A[i]);
		}
		int max=1;
		for(int i =0; i<n; i++){
			if(A[i]>max){
				max=A[i];
			}
		}
		printf("%d\n",max);
		for(int i = 0; i < n; i++){
			if(A[i] == max){
				printf("%d ",i);
			}
		}
		printf("\n");
	}
}
