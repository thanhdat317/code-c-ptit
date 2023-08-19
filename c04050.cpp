#include<stdio.h>
#include<math.h>
int cnt1[1000];
int cnt2[1000];
int main(){
	int n, m;
	scanf("%d %d", &n, &m);
	int a[n], b[m];
	for(int i = 0 ; i< n ; i++){
		scanf("%d", &a[i]);
		cnt1[a[i]] = 1;
	}
	for(int i = 0 ; i< m; i++){
		scanf("%d", &b[i]);
		cnt2[b[i]]=1;
	}
		for(int i = 0 ; i<1000; i++){
			if(cnt1[i]==1 && cnt2[i]==1){
				printf("%d ",i);
			}
		}
		printf("\n");
		for(int i = 0 ; i< 1000; i++){
			if(cnt1[i]==1 && cnt2[i]==0){
				printf("%d ",i);
			}
		}
		printf("\n");
		for(int i = 0 ; i<1000; i++){
			if(cnt1[i]==0 && cnt2[i]==1){
				printf("%d ",i);
			}
		}
	}
