#include<bits/stdc++.h>
#include<cstring>

using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		set<char> s;
		string a,b;
		cin>>n>>a>>b;
		for(int i=0;i<n;i++){
			if(a[i]!=b[i]){
				s.nsert(b[i]);
			}
		}
		int p=s.size();
		cout<<p<<endl;
	}
	return 0;
}
