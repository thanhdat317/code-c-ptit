#include<math.h>
#include<stdio.h>
#define ll long long;
void solve(int n, int p){
	int cnt =0;
	for(int i = 2; i<= n; i++){
		int tmp =i;// gan 1 bien phu khong no se lam thay doi gia tri cua i
			while(tmp % p == 0){
				cnt++;
				tmp/=p;
			}
		}
		printf("%d\n",cnt);
	}
int main(){
	int t ;
	scanf("%d", &t);
	while(t--){
		int n, p;
		scanf("%d %d", &n, &p);
		solve(n,p);
}
}
