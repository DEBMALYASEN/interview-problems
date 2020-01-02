/* swap diagonals */
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
	for(i=0;i<m;i++)
 {
 	if(i!=m/2)
 	swap(a[i][i],a[i][m-i-1])     ;
}

		for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<" ";

	cout<<endl;    }
}
