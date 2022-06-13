#include<bits/stdc++.h>
using namespace std ;
int main(){
	int t;
	cin>>t;
	while(t--){
		int count=1;
		int a,b;
		cin>>a>>b;
		if(abs(b-a)!=1){
			count++;
		}
		for(int i=2;i<abs(b-a);i++){
			if(abs(b-a)%i==0){
				count++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}
