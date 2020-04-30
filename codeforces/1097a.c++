//https://codeforces.com/problemset/problem/1097/A
#include<bits/stdc++.h>
using namespace std;
int main() {
	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
	bool flag = false;
	string table;
	string hand[5];
	cin>>table;
	for(int i=0;i<5;i++) {
		cin>>hand[i];
	}
	for(int i=0;i<5;i++) {
		if(table.substr(0,1).compare(hand[i].substr(0,1))==0 || table.substr(1,1).compare(hand[i].substr(1,1))==0) {
			cout<<"YES";
			flag = true;
			break;
		}
	}
	if(!flag) {
		cout<<"NO";
	}

}
