#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

struct SinhVien{
	int stt;
	char name[100];
	char ns[100];
	double mon1,mon2,mon3;
};
typedef struct SinhVien SV;

void in(SV a){
	printf("%d %s %s %.1lf\n",a.stt, a.name, a.ns, a.mon1+a.mon2+a.mon3);
}
int cmp(const void *a, const void *b){
	SV *x = (SV*)a;
	SV *y =(SV*)b;
	if(x->mon1 + x->mon2 + x->mon3 != y->mon1 + y->mon2 + y->mon3){
		if(x->mon1 + x->mon2 + x->mon3 > y->mon1 + y->mon2 + y->mon3){
			return -1;
		}else{
			return 1;
		}
	}else{
		return x->stt-y->stt;
	}
}
int main(){
	int n;
	scanf("%d", &n);
	SV a[n];
	for(int i = 0 ; i< n ; i++){
		getchar();
		gets(a[i].name);
		gets(a[i].ns);
		scanf("%lf %lf %lf",&a[i].mon1, &a[i].mon2, &a[i].mon3);
		a[i].stt = i+1;
	}
	qsort(a,n, sizeof(SV),cmp);
	for(int i = 0 ;i< n; i++){
			in(a[i]);
		}
	}
