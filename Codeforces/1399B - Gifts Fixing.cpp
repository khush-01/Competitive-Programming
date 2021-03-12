
// Problem: B. Gifts Fixing
// Contest: Codeforces - Codeforces Round #661 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1399/B
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
    	
    	vi a(n),b(n);
    	fo(i, n) cin >> a[i];
    	fo(i, n) cin >> b[i];
    	
    	int mina = *min_element(a.begin(), a.end());
    	int minb = *min_element(b.begin(), b.end());
    	
    	int m = 0;
    	fo(i, n)
    		m += max(a[i]-mina, b[i]-minb);
    	
    	cout << m;
    	    	
    	cout << endl;
    }
 
    return 0;
}
