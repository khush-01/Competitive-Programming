
// Problem: A. Add Odd or Subtract Even
// Contest: Codeforces - Codeforces Round #624 (Div. 3)
// URL: https://codeforces.com/problemset/problem/1311/A
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
#define pb push_back
#define fast ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

int32_t main() {
    fast

    int t;
    cin >> t;
    while (t--) {
    	int a, b;
    	cin >> a >> b;
    	
    	int d = abs(a - b);
    	if(d == 0)
    		cout << 0;
    	else if(a < b) {
    		if(d % 2)
    			cout << 1;
    		else
    			cout << 2;
    	}
    	else {
    		if(d % 2)
    			cout << 2;
    		else
    			cout << 1;
    	}
    	
    	cout << endl;
    }

    return 0;
}
