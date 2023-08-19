#include<stdio.h>
#include<math.h>
#include<stdlib.h>
void sort(long long a[], int n){
	for(int i = 0 ; i< n ; i++){
		int pos = i;
		for(int j = i+1; j<n ; j++){
			if(a[j]<a[pos]){
				pos =j;
			}
		}
		int tmp = a[i]; a[i]= a[pos]; a[pos]=tmp;
	}
}
int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		int n;
		scanf("%d", &n);
		long long  a[n];
		for(int i = 0 ; i< n ; i++){
			scanf("%lld", &a[i]);
			a[i] = a[i] *a[i];
		}
		sort(a,n);
		int check = 0;
		for(int i = n-1; i>=2; i--){
			int l = 0, r = i-1;
			while(l<r){
				long long sum = a[l]+a[r];
			    if(sum ==a[i]){
			    	check =1; break;
				}else if(sum<a[i]){
					l++;
				}else{
					r--;
				}
			}
		}
		if(check ==1){
			printf("YES\n");
		}else{
			printf("NO");
		}
	}
}
