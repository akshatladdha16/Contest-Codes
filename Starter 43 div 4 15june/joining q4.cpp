#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		if(k%5!=0&&n%5!=0){
			cout<<((n/5)+1)-((k/5)+1)<<endl;	
		}
		else if(k%5==0&&n%5!=0){
			cout<<((n/5)+1)-(k/5)<<endl;
		}
		else if(k%5!=0&&n%5==0){
			cout<<n/5-((k/5)+1)<<endl;
		}
		else if(k%5==0&&n%5==0){
			cout<<n/5-k/5<<endl;
		}
	}
	return 0;
}
