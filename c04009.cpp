#include<stdio.h>
/*
int main(){
	int A[1001];
	int n;
	scanf("%d", &n);
	for(int i =0; i<n; i++){
		scanf("%d", &A[i]);
	}
	for(int i =0; i< n; i++){
		if(A[i]%2==0){
			printf("%d ",A[i]);
    }
     }
     printf("\n");
    for(int i =0 ; i<n; i++){
    	if(A[i] %2==1){
    		printf("%d ",A[i]);
		}
	}
	printf("\n");
}
*/
#include<stdio.h>

int main(){
	int n;
	int A[n];
	scanf("%d", &n);
	for(int i =0;i <n; i++){
		scanf("%d",&A[i]);
	}
	int count1= 0, count2 =0, B[n], C[n];
	for(int i =0 ; i < n; i++){
		if(A[i] %2 ==0){
			B[count1]=A[i];
			++count1;
		}else{
			C[count2]= A[i];
			++count2;
		}
	}
	for(int i =0; i<count1; i++){
		printf("%d ",B[i]);
	}
	printf("\n");
	for(int i =0 ; i<count2; i++){
		printf("%d ", C[i]);
	}

}
