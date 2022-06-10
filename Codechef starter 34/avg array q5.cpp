#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		for(int i=1;i<=n/2;i++){
			cout<<x-i<<" ";
		}
		if(n%2==1){
			cout<<x<<" ";
		}
		for(int i=1;i<=n/2;i++){
			cout<<x+i<<" ";
		}
	}
	return 0;
}
