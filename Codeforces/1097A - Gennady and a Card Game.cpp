
// Problem: A. Gennady and a Card Game
// Contest: Codeforces - Hello 2019
// URL: https://codeforces.com/problemset/problem/1097/A
// Memory Limit: 256 MB
// Time Limit: 1000 ms
// Powered by CP Editor (https://github.com/cpeditor/cpeditor)

#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define mod 1000000007
#define int long long
#define float double
#define fo(i,n) for(int i=0; i<n; i++)
#define lfo(i, m, n) for(int i=m; i<n; i++)
#define rfo(i,n) for(int i=n-1; i>=0; i--)
#define vi vector<int>
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main() {
    fast

    int t = 1;
    // cin >> t;
    while (t--) {
    	string s;
    	cin >> s;
    	
    	vector<string> v(5);
    	fo(i, 5) cin >> v[i];
    	
    	bool flag = false;
    	fo(i, 5)
    		if(v[i][0] == s[0] || v[i][1] == s[1]) {
    			flag = true;
    			break;
    		}
    	
    	if(flag)
    		cout << "YES";
    	else
    		cout << "NO";
    }

    return 0;
}
