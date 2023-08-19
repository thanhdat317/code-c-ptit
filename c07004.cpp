#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include<math.h>
struct phanso{
	long long tu;
	long long mau;
};
typedef struct phanso ps;
long long gcd(long long a, long long b){
	b = abs(b);
	a= abs(a);
	if(b==0){
		return a;
	}else{
		return gcd(b,a%b);
	}
}
long long  lcm(long long a, long long b){
	return 1ll*a*b/gcd(a,b);
}
ps rutgon(ps a){
	ps res;
	long long uc = gcd(abs(a.tu),abs( a.mau));
	res.tu =(long long) a.tu/uc;
	res.mau = (long long)a.mau/uc;
	return res;
}
ps tong(ps a, ps b){
	ps res;
	long long bc = (long long)lcm(a.mau,b.mau);
	res.tu = (long long)bc/a.mau *a.tu+ bc/b.mau *b.tu;
	res.mau = bc;
	return rutgon(res);
}
ps thuong(ps a, ps b){
	ps res ;
	res.tu = (long long)a.tu *b.mau;
	res.mau =(long long)a.mau *b.tu;
	return rutgon(res);
}
int main(){
	int t;
	scanf("%lld", &t);
	for(int k = 1; k<=t;k++){
		ps a,b;
		printf("Case #%lld:\n",k);
		scanf("%lld %lld %lld %lld",&a.tu, &a.mau, &b.tu, &b.mau);
		rutgon(a);rutgon(b);
		ps qd1, qd2;
		long long  bc1 =lcm(a.mau, b.mau);
		qd1.tu = (long long)a.tu*bc1/a.mau;
		qd2.tu = (long long)b.tu *bc1/b.mau;
		qd1.mau = bc1;
		qd2.mau = bc1;
		printf("%lld/%lld %lld/%lld\n",qd1.tu,qd1.mau,qd2.tu,qd2.mau);
		ps t = tong(a,b);
	    ps th =thuong(a,b);
		printf("%lld/%lld",t.tu,t.mau);
		printf("\n");
		printf("%lld/%lld",th.tu,th.mau);
		printf("\n");
	}
}

