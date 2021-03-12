
// Problem: B. Queue at the School
// Contest: Codeforces - Codeforces Round #163 (Div. 2)
// URL: https://codeforces.com/problemset/problem/266/B
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
 
string _queue(string s) {
	int n = s.length();
	string o = "";
	
	int i = 0;
	while(i <= n-1) {
		if(s[i] == 'B' && s[i+1] == 'G'){
			o += "GB";
			i += 2;
		}
		else {
			o += s[i];
			i++;
		}
	}
	return o;
}
 
int32_t main() {
    fast
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	int n, k;
    	cin >> n >> k;
    	string l;
    	cin >> l;
    	
    	fo(i, k) l = _queue(l);
    	cout << l;
    }
 
    return 0;
}
