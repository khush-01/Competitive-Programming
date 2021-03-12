
// Problem: A. Presents
// Contest: Codeforces - Codeforces Beta Round #97 (Div. 2)
// URL: https://codeforces.com/problemset/problem/136/A
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
 
bool col(const vi &v1, const vi &v2) {
	return v1[0] < v2[0];
}
 
int32_t main() {
    fast
 
    int t = 1;
    // cin >> t;
    while (t--) {
    	int n;
    	cin >> n;
    	vector<vi> v(n);
    	
    	fo(i, n) {
    		v[i] = vi(2);
    		cin >> v[i][0];
    		v[i][1] = i + 1;    		
    	}
    	
    	sort(v.begin(), v.end(), col);
    	
    	fo(i, n) cout << v[i][1] << " ";
    }
 
    return 0;
}
