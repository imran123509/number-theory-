#include<bits/stdc++.h>
using namespace std;
const int N=1e5+10;
int fact[N];
int binexp(int a, int b, int m){
	int res=1;
	while(b>0){
	if(b&1){
		res=(res * 1LL *a)%m;
	}
		a=(a* 1LL *a)%m;
	
	b >>=1;
	}
	return res;
}