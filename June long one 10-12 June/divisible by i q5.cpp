#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x=1;
	    cin>>n;
	    if(n%2==0)
	    {
	        x=n/2;
	        int i=1;
	        cout<<x<<" ";
	        while(i<n)
	        {
	            if(i%2!=0)
	            {
	                x=x+i;
	                cout<<x<<" ";
	            }
	            else
	            {
	                x-=i;
	                cout<<x<<" ";
	            }
	            i++;
	        }
	    }
	    else
	    {
	        x=n/2 + 1;
	        int i=1;
	        cout<<x<<" ";
	        while(i<n)
	        {
	            if(i%2==0)
	            {
	                x=x+i;
	                cout<<x<<" ";
	            }
	            else
	            {
	                x=x-i;
	                cout<<x<<" ";
	            }
	            i++;
	        }
	    }
	    cout<<endl;
	}
	return 0;
}
