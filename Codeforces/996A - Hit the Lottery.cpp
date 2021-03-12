
// Problem: A. Hit the Lottery
// Contest: Codeforces - Codeforces Round #492 (Div. 2) [Thanks, uDebug!]
// URL: https://codeforces.com/problemset/problem/996/A
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
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
int32_t main() {
    fast
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	int n, c = 0;
    	cin >> n;
    	
    	if(n >= 100) {
    		c += n / 100;
    		n %= 100;
    	}
    	if(n >= 20) {
    		c += n / 20;
    		n %= 20;
    	}
    	if(n >= 10) {
    		c += n / 10;
    		n %= 10;
    	}
    	if(n >= 5) {
    		c++;
    		n -= 5;
    	}
    	if(n >= 1)
    		c += n;
    	
    	cout << c;
    }
 
    return 0;
}
