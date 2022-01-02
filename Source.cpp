#include <bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=1e18+1;

void pascal_triangle(int n){
	for(int line=1; line<=n; line++){
		int cnt=1;
		for(int i=1; i<=line; i++){
			cout<<cnt<<" ";
			cnt=cnt*(line-i)/i;
		}
		cout<<endl;
	}
}
int main(){
	int n;
	cin>>n;
	pascal_triangle(n);
}
