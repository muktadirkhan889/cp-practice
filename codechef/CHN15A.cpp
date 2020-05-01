// https://www.codechef.com/problems/CHN15A
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t,n,k,temp,count;
    cin>>t;
    while(t--) {
        cin>>n>>k;
        count=0;
        for(int i=0;i<n;i++) {
            cin>>temp;
            if((temp+k)%7==0) {
                count++;
            }
        }
        cout<<count<<"\n";
    }
}
