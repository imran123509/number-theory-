
#include <bits/stdc++.h> 
using namespace std; 
#define ll long long 
const int N=1e5+5;
bool prime[N];
int main(){
	for(int i=0; i<=N; i++){
		prime[i]=true;
	}

	prime[0]=prime[1]=false;
	for(int i=2; i*i<=N; i++){
		if(prime[i]==true){
			for(int j=i*i; j<=N; j +=i){
				prime[j]=false;
			}
		}
	}
	cout<<prime[11]<<endl;
	}