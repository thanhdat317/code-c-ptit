#include<stdio.h>
#include<math.h>
int A[100];
int check(int n){
	if(n<2) return 0;
	else{
		for(int i =2; i<=sqrt(n); i++){
			if(n %i==0){
				return 0;
			}
		}
	return 1;
}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		for(int i =0; i<n; i++){
			scanf("%d",&A[i]);				
	}
	for(int i =0; i<n; i++){
		if(check(A[i])){
			printf("%d ",A[i]);
		}
	}
	printf("\n");
	
}
}
