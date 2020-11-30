#include <bits/stdc++.h>
using namespace std;
#define mp make_pair
#define pb push_back
#define all(v) v.begin(),v.end()
#define N 4

int sol[N][N];

bool isSafe(int p[N][N], int x, int y)
{
    if(x>=0 && x<N && y>=0 && y<N && p[x][y])
        return true;
    
    return false;
}

bool solveMazeUtil(int p[N][N], int x, int y)
{
    if(x==N-1 && y==N-1 && p[x][y])
    {
        sol[x][y]=1;
        return true;
    }
    
    if(isSafe(p,x,y))
    {
        sol[x][y]=1;
        
        if(solveMazeUtil(p,x+1,y))
            return true;
        
        if(solveMazeUtil(p,x,y+1))
            return true;
        
        sol[x][y]=0;
        return false;
    }
    
    return false;
}

int main()
{
	memset(sol,0,sizeof(sol));
	int p[N][N]={ { 1, 0, 0, 0 }, { 1, 1, 0, 1 }, { 0, 1, 0, 0 }, { 1, 1, 1, 1 } };
	if(p[0][0]==0)
	    cout<<"Solution doesn't exist.";
	solveMazeUtil(p,0,0);
	
	for(int i=0;i<N;i++)
	{
	    for(int j=0;j<N;j++)
	        cout<<sol[i][j]<<" ";
	    cout<<endl;
	}
}
