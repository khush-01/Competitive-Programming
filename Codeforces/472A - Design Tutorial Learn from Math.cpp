
// Problem: A. Design Tutorial: Learn from Math
// Contest: Codeforces - Codeforces Round #270
// URL: https://codeforces.com/problemset/problem/472/A
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
	
	vector<bool> v(1000001, true);
	v[0] = v[1] = false;
	lfo(p, 2, v.size()) {
		if(v[p]) {
			for(int i = p*p; i < v.size(); i += p)
				v[i] = false;
		}
	}
	
    int t = 1;
    // cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	
    	int x = n / 2;
    	int y = n - x;
    	while(v[x] || v[y]) {
    		x--;
    		y++; 
    	}
    	
    	cout << x << " " << y;
    }
 
    return 0;
}
