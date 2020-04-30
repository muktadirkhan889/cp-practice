//https://www.codechef.com/status/TABLET
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t,n,b,w,h,p,max_size;
	cin>>t;
	while (t--) {
		cin>>n>>b;
		max_size = LONG_MIN;
		for(long i=0;i<n;i++) 	{
			cin>>w>>h>>p;
			if(p<=b && w*h>max_size) {
				max_size = w*h;
			}
		}
		if(max_size==LONG_MIN) {
			cout<<"no tablet";
		} else {
			cout<<max_size;
		}
		cout<<"\n";
	}
	
}
