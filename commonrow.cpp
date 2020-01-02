/* common distinct elements in the rows of a matrix */
#include<bits/stdc++.h>
using namespace std;
int main()
{        int i,j;
   int m=0,n=0;
	cin>>m;
	int a[m][m];
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		cin>>a[i][j];
	}
	unordered_set<int>s;
	for(i=0;i<m;i++)
	s.insert(a[0][i]);
	for(i=1;i<m;i++)
	{
		unordered_set<int> v;
		for(j=0;j<m;j++)
		v.insert(a[i][j]);
		for(auto t:s)
		{
			if(v.find(t)==v.end())
			s.erase(t);
		}
		if(s.size()==0 )
          break;
	}
	 for(auto i:s)
	  cout<<i<< " " ;
}
	   
