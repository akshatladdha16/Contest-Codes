#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y;
		cin>>x>>y;
		int count=0;
		while(true){
			if(x==y){
			      break;
			}
			if(x>y){
				y=y+2;
			}
			else if(x<y){
				x=x+1;
			}
			count++;
		}
		cout<<count<<endl;
	}
	
//	but below one is more optimised solution
#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int x,y,n;
		n=0;
		cin>>x>>y;
		if(x==y){
		      cout<<n<<endl;
		}
		if(x>y){
		      n=x-y;
		      if(n%2==0){
		            cout<<n/2<<endl;
		      }else cout<<(n/2)+2<<endl;
		}
		if(x<y){
		      n=y-x;
		      cout<<n<<endl;
		}
	}
	return 0;
}
	return 0;
}

