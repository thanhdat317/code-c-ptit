#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct mathang{
	int ma;
	char name[1000];
	char nhom[1000];
	float mua, ban;
};
typedef struct mathang mathang;
void in(mathang a){
	printf("%d %s %s %.2f\n",a.ma,a.name,a.nhom,a.ban-a.mua);
}
int cmp(const void *a, const void *b){
	mathang *x =(mathang*)a;
	mathang *y =(mathang*)b;
	if(x->ban-x->mua > y->ban-y->mua){
		return -1;
	}else{
		return 1;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	mathang a[n];
	for(int i =0; i<n ; i++){
		getchar();
		gets(a[i].name);
		gets(a[i].nhom);
		scanf("%f %f",&a[i].mua, &a[i].ban);
		a[i].ma = i+1;
	}
	qsort(a,n,sizeof(mathang),cmp);
	for(int i = 0 ;i< n ; i++){
		in(a[i]);
		printf("\n");
	}
}
