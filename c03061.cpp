#include<stdio.h>
#include<math.h>
int a[100];
long long check(long long n){
	int r = (int)(n%10);
	while(n>9){
		n/=10;
	}
	int l = (int)(n);
	if(r%l==0 && r/l==2|| l%r==0 && l/r==2){
		return 1;
	}else{
		return 0;
	}
}
long long tn(long long n){
	long long temp = n, res =0;
	while(n !=0){
		res = res *10+ n%10;
		n/=10;
	}
	if(res== temp){
		return 1;
	}else{
		return 0;
	}
}
long long tach(long long n){
	int cnt = 1;
	long long temp = n;
	while(n>9){
		cnt++;
		n/=10;
	}
	return((temp-n*pow(10,cnt-1))/10);
}
int main(){
	int t;
    long long n;
    scanf("%d",&t);
while(t--)
{	
	scanf("%lld",&n);
	if(tn(tach(n))==1 && check(n)==1){
		printf("YES\n");
	}else{
		printf("NO\n");
	}
}
}
