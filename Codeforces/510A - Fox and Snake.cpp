
// Problem: A. Fox And Snake
// Contest: Codeforces - Codeforces Round #290 (Div. 2)
// URL: https://codeforces.com/problemset/problem/510/A
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
    	int r, c;
    	cin >> r >> c;
    	
    	for(int i = 1; i <= r; i++) {
    		if (i % 2)
    			fo(i, c)
    				cout << "#";
    		else {
    			if(i % 4) {
    				fo(i, c-1) cout << ".";
    				cout << "#";
    			}
    			else {
    				cout << "#";
    				fo(i, c-1) cout << ".";
    			}
    		}
    		
    		cout << endl;
    	}
    }
 
    return 0;
}
