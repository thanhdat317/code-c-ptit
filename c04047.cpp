#include<stdio.h>
#include<math.h>
#include<stdlib.h>
struct checkin{
	int start, time, end;
};
typedef struct checkin checkin;
int cmp(const void *a, const void *b){
	checkin *x =(checkin*)a;
	checkin *y =(checkin*)b;
	return x->start - y->start;
}
int main(){
	checkin a[100];
	int n;
	scanf("%d", &n);
	for(int i = 0 ; i< n; i++){
		scanf("%d %d",&a[i].start, &a[i].time);
		a[i].end= a[i].start+a[i].time;
	}
	qsort(a,n,sizeof(checkin),cmp);
	for(int i = 0 ; i< n-1 ; i++){
		if(a[i].end>a[i+1].start){
			a[i+1].start = a[i].end;
			a[i+1].end= a[i+1].start+a[i+1].time;
		}
	}
	printf("%d\n",a[n-1].end);
}
