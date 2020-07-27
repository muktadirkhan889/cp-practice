/* https://www.hackerrank.com/contests/all-india-contest-by-mission-helix-a-25th-july/challenges/easy-5-cc */
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t;
    cin>>t;
    while(t--) {
        int count=0;
        string s;
        string x;
        cin>>s>>x;
        for(int i=0;i<s.size();i++) {
            if(s[i]==x[0]) {
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
