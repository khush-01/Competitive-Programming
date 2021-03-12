
// Problem: A. Anton and Polyhedrons
// Contest: Codeforces - Codeforces Round #404 (Div. 2)
// URL: https://codeforces.com/problemset/problem/785/A
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
 
int32_t main() {
    fast
 
    int t, c = 0;
    cin >> t;
    while (t--) {
   		string s;
   		cin >> s;
   		
   		if(s[0] == 'T')
   			c += 4;
   		if(s[0] == 'C')
   			c += 6;
   		if(s[0] == 'O')
   			c += 8;
   		if(s[0] == 'D')
   			c += 12;
   		if(s[0] == 'I')
   			c += 20;
   		 	
    	
    	// cout << endl;
    }
    cout << c;
 
    return 0;
}
