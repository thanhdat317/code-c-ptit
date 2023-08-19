#include<stdio.h>
#include<math.h>
int check(int n){
	if(n< 2) return 0;
	else{
		for(int i = 2; i<= sqrt(n); i++){
			if(n % i ==0){
				return 0;
			}
		}
		return 1;
	}
}
int cnt[100001];
int main(){
	int t;
	scanf("%d" ,&t);
	for(int i = 1; i <=t; i++){
		int n;
		scanf("%d", &n);
		int  x, max = -1;
		for(int i = 0 ; i< n; i++){
			scanf("%d", &x);
			if(check(x)){
				cnt[x]++;
				if(x > max){
					max = x;
				}
			}
		}
		printf("Test %d:\n",i);
		for(int i =0 ; i<= max; i++){
			if(cnt[i] != 0){
				printf("%d xuat hien %d lan \n", i, cnt[i]);
			}
		}
		for(int i =0 ; i<n; i++){
			cnt[i]= 0;
		}
			}
		}
