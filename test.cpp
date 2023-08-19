#include<bits/stdc++.h>

using namespace std;
bool tn(long long n){
	long long tmp = n, res = 0;
	while(n != 0){
		res = res * 10 + n %10;
		n= n/10;
	}
	if(tmp == res){
		return true;
	}else{
		return false;
	}
}
int main(){
	int t; cin>> t;
	while(t--){
		long long n; cin>> n;
		if(tn(n)== false){
			cout<<"NO\n";
		}else{
			cout<<"YES\n";
		}
	}
}
