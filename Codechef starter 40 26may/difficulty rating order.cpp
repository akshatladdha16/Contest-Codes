#include<iostream>
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
		for(int i=0;i<n;i++)
		{
			if(a[i]>a[i+1])
			{
				cout<<"no";
				return;
			}
		}
		cout<<"yes";
	}
	return 0;
	
}
