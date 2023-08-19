#include<stdio.h>
int A[100005];
int main(){
	int t; 
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i = 0; i< n; i++){
			scanf("%d", &A[i]);
		}
		for(int i = 0 ; i< n; i++){
			int check = 1;
			for( int j = i+1; j < n ; j++ ){
				if(A[j] >= A[i]){
					check = 0;
					break;
				}
			}
			if(check){
				printf("%d ",A[i]);
		}
	}
	printf("\n");
}
}
