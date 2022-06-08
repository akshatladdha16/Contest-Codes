#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(n==1){
			if(k==0){
			      cout<<"NO"<<endl;
			}else cout<<"YES"<<endl;
		}
		else if(n%2==0){
		      cout<<"YES"<<endl;
		}
		else if(n>1&&n%2!=0){
		      if(k==0){
		            cout<<"NO"<<endl;
		      }else cout<<"YES"<<endl;
		}
	}
	return 0;
}
