#include<iostream>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x,y;
		cin>>n>>x>>y;
		int *a=new int[n];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int sum=0;
		for(int i=0;i<n;i++){
			sum=sum+a[i];
		}
		int sum1=0;
		for(int i=0;i<n;i++)
		{
			if(a[i]-y>0){
			sum1=sum1+(a[i]-y);
		      }
		}
		if(sum1+x<sum){
			cout<<"COUPON"<<endl;
		}
		else 	cout<<"NO COUPON"<<endl;
	
	}
	return 0;
}
