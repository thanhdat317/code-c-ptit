#include<stdio.h>

int main(){
	int A[10001];
	int t;
	scanf("%d",&t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i =0;i< n; i++){
			scanf("%d", &A[i]);
		}
		for(int i =0; i<n; i++){
			if(A[i] %2==0){
				printf("%d ",A[i]);
			}
		}
		printf("\n");
	}
}

