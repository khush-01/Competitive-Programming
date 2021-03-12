
// Problem: A. Petya and Strings
// Contest: Codeforces - Codeforces Beta Round #85 (Div. 2 Only)
// URL: https://codeforces.com/problemset/problem/112/A
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
	
	string str1, str2;
	cin >> str1 >> str2;
	
	transform(str1.begin(), str1.end(), str1.begin(), ::tolower);
	transform(str2.begin(), str2.end(), str2.begin(), ::tolower);
	
	if(str1 < str2)
		cout << -1;
	else if(str2 < str1)
		cout << 1;
	else
		cout << 0;

    return 0;
}
