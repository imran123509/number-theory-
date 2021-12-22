#include<bits/stdc++.h>
using namespace std;
const int N=1e7+10;
bool prime[N];
vector<int> lowest_prime(N,0), highest_prime(N,0);
int main(){
	for(int i=0; i<=N; i++){
		prime[i]=true;
	}

	prime[0]=prime[1]=false;
	for(int i=2; i*i<=N; i++){
		if(prime[i]==true){
			lowest_prime[i]=highest_prime[i]=i;
			for(int j=i*i; j<=N; j +=i){
				prime[j]=false;
				highest_prime[j]=i;
				if(lowest_prime[j]==0){
					lowest_prime[j]=i;
				}
			}
		}
	}
	int num;
	cin>>num;
	vector<int> prime_factors;
	while(num>1){
		int prime_factor=highest_prime[num];
		while(num%prime_factor==0){
			num /=prime_factor;
			prime_factors.push_back(prime_factor);
		}
	}
	for(int factor: prime_factors){
		cout<<factor<<" ";
	}
	}
