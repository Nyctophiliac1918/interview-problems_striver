// https://www.geeksforgeeks.org/find-the-point-where-maximum-intervals-overlap/

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    vector<int>s(n),e(n);
	    int maxs=0,maxe=0;
	    for(int i=0;i<n;i++)
	    {
	        cin>>s[i];
	        maxs=max(maxs,s[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        cin>>e[i];
	        maxe=max(maxe,e[i]);
	    }
	    int maxt=max(maxs,maxe);
	    int x[maxt+5];
	    memset(x,0,sizeof(x));
	    for(int i=0;i<n;i++)	// Lazy Addition
	    {
	        x[s[i]]++;	// you increement the count at the time when someone enters.
	        x[e[i]+1]--;	// you decreement the time next to it when someone leaves as arrival is given the priority.
	    }
	    int p=0,c=0,maxy=0;
	    for(int i=0;i<maxt+2;i++)
	    {
	        c+=x[i];
	        if(c>maxy)
	        {
	            maxy=c;
	            p=i;
	        }
	    }
	    cout<<maxy<<" "<<p<<endl;
	}
	return 0;
}
