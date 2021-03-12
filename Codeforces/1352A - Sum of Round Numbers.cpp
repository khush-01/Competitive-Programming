
// Problem: A. Sum of Round Numbers
// Contest: Codeforces - Codeforces Round #640 (Div. 4)
// URL: https://codeforces.com/problemset/problem/1352/A
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
    	int n;
    	cin >> n;
    	
    	vi v;
    	int i = 0;
    	while(n) {
    		int r = n % 10;
    		fo(j, i) r *= 10;
    		v.pb(r);
    		i++;
    		n /= 10;
    	}
    	
    	vi::iterator itr;
    	itr = remove(v.begin(), v.end(), 0);
    	v.erase(itr, v.end());
    	
    	cout << v.size() << endl;
    	fo(i, v.size()) cout << v[i] << " ";
    	
    	cout << endl;
    }
 
    return 0;
}
