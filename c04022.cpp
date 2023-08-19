#include<stdio.h>

int main(){
	int A[105];
	int n;
	scanf("%d",&n);
	for(int i = 0 ;i< n; i++){
		scanf("%d",&A[i]);
	}
	int max1= -1e10, max2 = -1e9;
	for(int i =0 ; i < n; i++){
		if(A[i]> max1){
			max2= max1;
			max1=A[i];
		}else if(A[i]>max2 && A[i] != max1){
			max2=A[i];
		}
	}
	printf("%d %d", max1 ,max2);
}
