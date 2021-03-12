
// Problem: A. Required Remainder
// Contest: Codeforces - Codeforces Round #653 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1374/A
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
 
    int t;
    cin >> t;
    while (t--) {
    	int x, y, n;
    	cin >> x >> y >> n;
    	
    	int q = n / x;
    	int ans = q * x + y;
    	
    	if(ans > n)
    		ans -= x;
    	
    	cout << ans;
    	
    	cout << endl;
    }
 
    return 0;
}
