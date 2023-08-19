//#include<stdio.h>
//
//int main(){
//	int A[100];
//	int t;
//	scanf("%d", &t);
//	while(t--){
//	int n;
//	scanf("%d", &n);
//	for(int i = 0 ; i< n ; i++){
//		scanf("%d", &A[i]);
//	}
//	int count = 0;
//	for(int i =0; i<n; i++){
//		int check =1;
//		for(int j= 0 ; j < i; j++){
//			if(A[j] > A[i]){
//				check= 0;
//				break;
//			}
//		}
//		if(check) ++count;
//	}
//	printf("%d\n",count);
//}
//}
#include<stdio.h>

int main(){
	int A[100];
	int t;
	scanf("%d", &t);
	while(t--){
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n ; i++){
		scanf("%d", &A[i]);
	}
	int count = 0,  max= -1e9;
	for(int i =0; i<n; i++){
		if(A[i]>=max){
			count++;
			max=A[i];
		}
	}
	printf("%d\n",count);
}
}
