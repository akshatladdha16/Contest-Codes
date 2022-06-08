#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		if(n%2==0&&n>=2){
			int y=0;
			for(int i=0;i<n;i++){
				if(a[i]==-1){
					y++;
				}
			}
			cout<<abs((n/2)-y)<<endl;
		}else return -1;
	}
	return 0;
}
