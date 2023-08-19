#include<stdio.h>
#include<math.h>
void check(int a[], int n){
	int oke = 0;
	for(int i = 0 ; i<n ;i++){
		for(int j = i+1; j<n ; j++){
			if(a[i]==a[j]){
				oke =1;
				printf("%d\n",a[j]);
				break;
			}
		}
		if(oke ==1) break;
	}
	if(oke ==0){
		printf("NO\n");
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		int a[n];
		for(int i = 0 ; i< n ; i++){
			scanf("%d", &a[i]);
		}
		check(a,n);
	}
}

