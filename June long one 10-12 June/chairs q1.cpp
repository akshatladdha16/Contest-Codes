#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		if(x>y){
			cout<<x-y;
		}else cout<<0;
	}
	return 0;
}
