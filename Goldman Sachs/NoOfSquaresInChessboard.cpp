#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){
	int n,t;
	cin>>t;
	while(t--){
		cin>>n;
		cout<<(n*(n+1)*(2*n+1))/6<<"\n";
	}
	return 0;
}
