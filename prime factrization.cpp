#include<bits/stdc++.h>
using namespace std;
int main(){
	int n; cin>>n;
	vector<int>prime;
	for(int i=2; i*i<=n; i++){
		while(n%i==0){
			prime.push_back(i);
			n /=i;
		}
	}
	if(n>1){
		prime.push_back(n);
	}
	for(int primes : prime){
		cout<<primes<<" ";
		
	}
}

