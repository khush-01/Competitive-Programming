
// Problem: A. Insomnia cure
// Contest: Codeforces - Codeforces Round #105 (Div. 2)
// URL: https://codeforces.com/problemset/problem/148/A
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
    	set<int> s;
    	int k, l, m, n, d;
    	cin >> k >> l >> m >> n >> d;
    	
    	int c = d;
    	if(k == 1 || l == 1 || m == 1 || n == 1)
    		cout << d;
    	else {
    		for(int i = 1; i <= d; i++)
    			if((i % k) && (i % l) && (i % m) && (i % n))
    				c--;
    		cout << c;
    	}
    }
 
    return 0;
}
