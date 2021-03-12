
// Problem: A. I Wanna Be the Guy
// Contest: Codeforces - Codeforces Round #268 (Div. 2)
// URL: https://codeforces.com/problemset/problem/469/A
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
    	int n, x;
    	cin >> n;
    	
    	set<int> s;
    	
    	int p;
    	cin >> p;
    	while (p--) {
    		cin >> x;
    		s.insert(x);
    	}
    	int q;
    	cin >> q;
    	while (q--) {
    		cin >> x;
    		s.insert(x);
    	} 
    	
    	if(s.size() == n)
    		cout << "I become the guy.";
    	else
    		cout << "Oh, my keyboard!";
    }
 
    return 0;
}
