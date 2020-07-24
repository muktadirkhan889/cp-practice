    /* https://codeforces.com/problemset/problem/58/A */
    #include <bits/stdc++.h>
    #define lli long long int
    using namespace std;
     
    bool solve(string s)
    {
        string original = "hello";
        int l = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == 'h' && l == 0)
            {
                l++;
            }
            else if (s[i] == 'e' && l == 1)
            {
                l++;
            }
            else if (s[i] == 'l' && l == 2)
            {
                l++;
            }
            else if (s[i] == 'l' && l == 3)
            {
                l++;
            }
            else if (s[i] == 'o' && l == 4)
            {
                l++;
            }
            if (l == 5)
            {
                break;
            }
        }
        if (l == 5)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    int main()
    {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
     
        string s;
        cin >> s;
        if (solve(s))
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
        return 0;
    }
