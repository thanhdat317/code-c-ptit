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
	double max = 0;
	for(int i = 0 ;i< n; i++){
		if(a[i].mon1 + a[i].mon2 + a[i].mon3 >=max){
			max =a[i].mon1 + a[i].mon2 + a[i].mon3 ;
		}
	}
	for(int i = 0 ;i< n; i++){
		if(a[i].mon1 + a[i].mon2 + a[i].mon3 == max){
			in(a[i]);
		}
	}
}
