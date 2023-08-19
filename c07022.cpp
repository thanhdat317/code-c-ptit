#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
struct SV{
	int ma;
	char name[100];
	double da,db,dc;
};
typedef struct SV sv;
sv a[1000];
sv nhap(){
	sv x;
	gets(x.name);
	scanf("%lf %lf %lf", &x.da, &x.db, &x.dc);
	return x;
}
void in(sv a){
	printf("%d %s %.1lf %.1lf %.1lf\n",a.ma, a.name ,a.da, a.db, a.dc);
}
int main(){
	int k = 0;// so phan tu cua mang
	int v =0;
	while(1){
		int n;
		scanf("%d", &n);
		if(n==1){
			scanf("%d", &k);
			for(int i = 0 ; i< k ; i++){
				getchar();
				a[i] = nhap();
				a[i].ma = i+1;
			}
			printf("%d\n",k);
		}else if(n==2){
			int x;
			scanf("%d", &x);
			getchar();
			gets(a[x-1].name);
			scanf("%lf %lf %lf", &a[x-1].da, &a[x-1].db, &a[x-1].dc);
			a[x-1].ma = x;
			printf("%d\n", x);
		}else if(n==3){
			for(int i= 0 ; i< k ; i++){
				if(a[i].da < a[i].db && a[i].db< a[i].dc){
					in(a[i]);
				}
			}
				break;
		}
	}
	
}
