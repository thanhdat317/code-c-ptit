#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct tamgiac{
	int a,b,c;
	double s;
};
typedef struct tamgiac tg;
int cmp(const void *a, const void *b){
	tg *x=(tg*)a;
	tg *y =(tg*)b;
	if(x->s < y->s){
		return -1;
	}else{
		return 1;
	}
}
int main(){
	tg x[1000];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n ; i++){
		scanf("%d %d %d", &x[i].a, &x[i].b, &x[i].c);
	}
	for(int i = 0 ; i< n ; i++){
		double p =(double)(x[i].a + x[i].b + x[i].c)/2;
		x[i].s = (double)(sqrt(p *(p-x[i].a)*(p-x[i].b) *(p-x[i].c)));
	}
	qsort(x ,n ,sizeof(tg),cmp);
	for(int i = 0 ; i< n ; i++){
		printf("%d %d %d\n",x[i].a, x[i].b, x[i].c);
	}
}
