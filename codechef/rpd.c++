//https://www.codechef.com/problems/RPD
#include<bits/stdc++.h>
using namespace std;
long sum_of_digits(long n) {
	long sum=0;
	while(n>0) {
		sum += n%10;
		n/=10;
	}
	return sum;
}
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	long t,n,max;
	cin>>t;
	while(t--) {
		cin>>n;
		long a[n];
		max = LONG_MIN;
		for(long i=0;i<n;i++) {
			cin>>a[i];
		}
		for(long i=0;i<n-1;i++) {
			for(long j=i+1;j<n;j++) {
				long temp_sum = sum_of_digits(a[i]*a[j]);
				if(temp_sum>max) {
					max = temp_sum;
				}
			}
		}
		cout<<max<<"\n";
	}
	
}
