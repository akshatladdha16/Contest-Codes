#include<bits/stdc++.h>
using namespace std;

int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		long long *a=new long long[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		long long sum=0;
		long long temp=a[n-1]+a[0];
		for(int i=0;i<n-1;i++)
		{
		      sum=a[i]+a[i+1];
		      if(temp<sum){
		            temp=sum;
		      }
		}
		cout<<temp<<endl;
	}
	return 0;
}
