#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int a,b;
		cin>>a>>b;
		if(a%3==0 || b%3==0) cout<<0;
        else if(a%3==b%3) cout<<1;
        else cout<<2;
        cout<<endl;
	}
	return 0;
}
