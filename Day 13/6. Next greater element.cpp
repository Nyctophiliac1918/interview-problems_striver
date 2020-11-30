#include <iostream>
#include <stack>
using namespace std;

int main() {
	int a[]={5,3,2,10,6,8,1,4,12,7,4};
	int n=sizeof(a)/sizeof(int);
	stack<int>s;
	s.push(a[0]);
	for(int i=1;i<n;i++)
	{
	    if(s.empty())
	    {
	        s.push(a[i]);
	        continue;
	    }
	    
	    while(s.empty()==false && s.top()<a[i])
	    {
	        cout<<s.top()<<" -> "<<a[i]<<endl;
	        s.pop();
	    }
	    
	    s.push(a[i]);
	}
	
	while(!s.empty())
	{
	    cout<<s.top()<<" -> "<<-1<<endl;
	    s.pop();
	}
	return 0;
}
