#include<stdio.h>
#include<math.h>
void nt(int n){
		for(int i = 2; i <= n; i++){
			int count =0;
			if(n % i==0){
				while(n % i ==0){
					count++;
					n /= i;
				}
				printf("%d(%d) ",i ,count);			
				}
			}
			printf("\n");
		}
int main(){
	int t;
	scanf("%d",&t);
	for(int i =1; i<= t; i++){
		int n;
		scanf("%d", &n);
		printf("Test %d: ",i);
		nt(n);
	}
	}
