
// Problem: A. Helpful Maths
// Contest: Codeforces - Codeforces Round #197 (Div. 2)
// URL: https://codeforces.com/problemset/problem/339/A
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
	
	string exp;
	cin >> exp;
	
	int num = exp.length() / 2 + 1;
	vi vec(num);
	fo(i, num)
		vec[i] = exp[2*i] - 48; 
	
	sort(vec.begin(), vec.end());
	
	string out = "";
	fo(i, num-1)
		out += to_string(vec[i]) + "+";
	out += to_string(vec[num-1]);
	
	cout << out;

    return 0;
}
