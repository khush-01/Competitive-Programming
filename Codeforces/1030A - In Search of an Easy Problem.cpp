
// Problem: A. In Search of an Easy Problem
// Contest: Codeforces - Technocup 2019 - Elimination Round 1
// URL: https://codeforces.com/problemset/problem/1030/A
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
    	int n;
    	cin >> n;
    	
    	vi v(n);
    	fo(i, n) cin >> v[i];
    	
    	if(accumulate(v.begin(), v.end(), 0) != 0)
    		cout << "HARD";
    	else
    		cout << "EASY";
    }
 
    return 0;
}
