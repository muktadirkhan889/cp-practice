/* https://practice.geeksforgeeks.org/problems/row-with-minimum-number-of-1s/0/?track=matrix-interview&batchId=117 */
#include<bits/stdc++.h>
#define lli long long int;
using namespace std;
int start(int a [],int n) {
    int low = 0;
    int high = n-1;
    int res = -1;
    while(low<=high) {
        int mid = low + (high - low)/2;
        if(a[mid]==1) {
            res = mid;
            high = mid-1;
        }
        else if(a[mid]<1) {
            low = mid + 1;
        } else {
            high = mid-1;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int t;
	cin>>t;
	while(t--){
	    int n, m;
	    cin>>n>>m;
	    int mat[n][m];
	    for(int i=0; i<n; i++) {
	        for(int j=0; j<m; j++) {
	            cin>>mat[i][j];
	        }
	    }
	    int row = -1;
	    int min_n = INT_MAX;
	    for(int i=0; i<n; i++) {
	        int start_index = start(mat[i],m);
	        if(start_index>=0 && ((m - start_index)<min_n)) {
	            min_n = m - start_index;
	            row = i;
	        }
	    }
	    cout<<row<<"\n";
	}
	return 0;
}
