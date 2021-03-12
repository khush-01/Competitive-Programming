
// Problem: A. Ultra-Fast Mathematician
// Contest: Codeforces - Codeforces Beta Round #57 (Div. 2)
// URL: https://codeforces.com/problemset/problem/61/A
// Memory Limit: 256 MB
// Time Limit: 2000 ms
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
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main() {
    fast
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	string s, t;
    	cin >> s >> t;
    	
    	string o = "";
    	fo(i, s.length()) {
    		if(s[i] != t[i])
    			o += "1";
    		else
    			o += "0";
    	}
    	
    	cout << o;
    }
 
    return 0;
}
