
// Problem: A. Beautiful Year
// Contest: Codeforces - Codeforces Round #166 (Div. 2)
// URL: https://codeforces.com/problemset/problem/271/A
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
 
bool dist(int y) {
	string s = to_string(y);
	set<int> dg(s.begin(), s.end());
	return s.size() == dg.size();
}
 
int32_t main() {
    fast
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	int yr;
    	cin >> yr;
    	while(!dist(++yr)) {}
    	cout << yr;
    }
 
    return 0;
}
