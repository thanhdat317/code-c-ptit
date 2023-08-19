#include<stdio.h>
#include<stdlib.h>
int check(int n){
	while(n>=10){
		int r = n %10;
		if(r<(n/10)%10){
			return 0;
		}
		n/=10;
	}
	return 1;
}
struct number{
	int val;
	int fre;
};
typedef struct number number;
int findPos(number a[], int n, int x){
	for(int i = 0 ; i < n ; i++){
		if(a[i].val==x){
			return i;
		}
	}
	return -1;
}
int cmp(const void *a, const void *b){
	number *x =(number*)a;
	number *y =(number*)b;
	return y->fre - x->fre;
}
int main(){
	number a[100003];
	int n = 0;
	int x;
	while(scanf("%d", &x) != -1){
		if(check(x)){
		 int pos= findPos(a,n,x);
		 if(pos == -1){
		 	a[n].val = x;
		 	a[n].fre =1;
		 	n++;
		 }else{
		 	a[pos].fre++;
		 }
		}
	}
	qsort(a,n, sizeof(number),cmp);
	for(int i = 0; i < n ; i++){
		printf("%d %d\n",a[i].val,a[i].fre);
	}
}
