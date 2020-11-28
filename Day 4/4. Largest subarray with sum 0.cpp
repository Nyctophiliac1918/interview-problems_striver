// search on google, gfg question
// method in copy

#include <bits/stdc++.h>
/*#include <vector>
#include <algorithm>
#include <cmath>
#include <climits>
#include <iomanip> //for setprecision()
#include <cstring> //for memset()*/
using namespace std;
#define ll long long
#define pb push_back
#define rep(i,n) for(int i=0;i<n;i++)
#define w(x) int x; cin>>x; while(x--)
#define FAST ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0);

int main()
{
	int n;
	cin>>n;
	vector<int>a(n);
	for(int i=0;i<n;i++) cin>>a[i];
	map<int,int>m;
	int ma=0,s=0;
	for(int i=0;i<n;i++)
	{
	    int k=0;
	    s+=a[i];
	    if(s==0)
	        k=i+1;
	    else
    	{
    	    if(m.find(s)==m.end())
    	        m[s]=i;
    	    else
    	        k=i-m[s];
    	}
    	ma=max(ma,k);
	}
	cout<<ma;
}
