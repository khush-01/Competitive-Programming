
// Problem: A. Team Olympiad
// Contest: Codeforces - Codeforces Round #279 (Div. 2)
// URL: https://codeforces.com/problemset/problem/490/A
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
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	int n, x;
    	cin >> n;
    	
    	vi t1, t2, t3;
    	fo(i, n) {
    		cin >> x;
    		if(x == 1)
    			t1.pb(i+1);
    		else if(x == 2)
    			t2.pb(i+1);
    		else
    			t3.pb(i+1);
    	}
    	
    	int l1 = t1.size(), l2 = t2.size(), l3 = t3.size();
    	
    	int teams = min(l1, min(l2, l3));
    	cout << teams << endl;
    	fo(i, teams)
    		cout << t1[i] << " " << t2[i] << " " << t3[i] << endl; 
    }
 
    return 0;
}
