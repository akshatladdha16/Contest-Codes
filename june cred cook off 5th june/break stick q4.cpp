#include<bits/stdc++.h>
using namespace std;
int main(){
	int t
	cin>>t;
	while(t--){
		int n,x;
		cin>>n>>x;
		if(x%2!=0){
			cout<<"YES"<<endl;
		}else if((n-x)%2==0){
			cout<<"YES";
		}else cout<<"NO"<<endl;
	}
	return 0;
}
