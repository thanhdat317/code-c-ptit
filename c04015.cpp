#include<stdio.h>
int cnt[1000001];
int main(){
	int t;
	scanf("%d", &t);
	for(int i =1; i<= t; i++){
	int A[101];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d", &A[i]);
	}
	for(int i =0;i < n; i++){
		cnt[A[i]]++;
	}
	 printf("Test %d:\n", i);
	for(int i = 0 ; i< n; i++ ){
		if(cnt[A[i]] !=0){
			printf("%d xuat hien %d lan\n", A[i],cnt[A[i]]);
			cnt[A[i]] = 0 ;
		}
	}

	}
}
