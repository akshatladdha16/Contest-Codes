#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int p1,p2,q1,q2,p,q;
		cin>>p1>>p2>>q1>>q2;
		if(p1>p2){
			p=p1;
		}else p=p2;
		if(q1>q2){
			q=q1;
		}else q=q2;
		if(p>q){
			cout<<"Q";
		}
		else if(p<q){
			cout<<"P";
		}
		else cout<<"TIE";
	}
	return 0;
}
