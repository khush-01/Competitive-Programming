
// Problem: A. Elephant
// Contest: Codeforces - Codeforces Round #340 (Div. 2)
// URL: https://codeforces.com/problemset/problem/617/A
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
    	int d, c = 0;
    	cin >> d;
    	
    	if(d >= 5) {
			c += d / 5;
			d %= 5;
		}
		if(d >= 4) {
			d -= 4;
			c++;
		}
		if(d >= 3) {
			d -= 3;
			c++;
		}
		if(d >= 2) {
			d -= 2;
			c++;
		}
		if(d >= 1) {
			d -= 1;
			c++;
		}
		
		cout << c;
    }
 
    return 0;
}
