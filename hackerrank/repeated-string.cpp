/* https://www.hackerrank.com/challenges/repeated-string/problem */

#include <bits/stdc++.h>

using namespace std;

// Complete the repeatedString function below.
long repeatedString(string s, long n) {
    long quot = n/s.size();
    long rem = n%s.size();
    return (quot * count(s.begin(),s.end(),'a')) + count(s.begin(),s.begin()+rem,'a');

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    long n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    long result = repeatedString(s, n);

    fout << result << "\n";

    fout.close();

    return 0;
}
