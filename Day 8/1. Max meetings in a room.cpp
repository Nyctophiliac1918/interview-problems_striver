// make a vector which includes all the details for the meeting and then sort the vector on the basis of the finishing time of the meetings, and then make another vector and store the the first meeting's details and store its finishing time as a variable and then traverse the first vector and check if the starting time of the next meeting is greater than the time stored in the variable then this meeting can also take place, push back its detais in the new vector.

#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()

int main() {
	int s[]={75250, 50074, 43659, 8931, 11273, 27545, 50879, 77924};
	int f[]={112960, 114515, 81825, 93424, 54316, 35533, 73383, 160252 };
	vector<pair<int,pair<int,int>>> v;
	int n=sizeof(s)/sizeof(int);
	for(int i=0;i<n;i++)
	{
	    auto p=mp(f[i],mp(s[i],i+1));
	    v.pb(p);
	}
	sort(all(v));
	vector<int>m={v[0].second.second};
	int t=v[0].first;
	for(int i=1;i<n;i++)
	{
	    if(v[i].second.first>=t)
	    {
	        m.pb(v[i].second.second);
	        t=v[i].first;
	    }
	}
	for(int i=0;i<m.size();i++)
	    cout<<m[i]<<" ";
	return 0;
}
