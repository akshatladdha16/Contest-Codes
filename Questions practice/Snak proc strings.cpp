#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int l;
		cin>>l;
		string s;
		getline(cin,s);
		for(int i=0;i<l;i++){
			if(s[i]==s[i+1]||(s[i]=='H'&&s[i+1]=='.')||(s[i]=='.'&&s[i+1]=='T'))
			{
				cout<<"Invalid"<<endl;
			}
		}
		cout<<"Valid"<<endl;
	}
	return 0;
}

