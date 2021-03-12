
// Problem: A. I_love_%username%
// Contest: Codeforces - Codeforces Round #109 (Div. 2)
// URL: https://codeforces.com/problemset/problem/155/A
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
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main() {
    fast
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	
    	vi v(n);
    	fo(i, n) cin >> v[i];
    	
    	int l = v[0], h = v[0], c = 0;
    	lfo(i, 1, v.size()) {
    		if(v[i] < l) {
    			l = v[i];
    			c++;
    		}
    		if(v[i] > h) {
    			h = v[i];
    			c++;
    		}
    	}
    	cout << c;
    }
 
    return 0;
}
