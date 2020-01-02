	/* Given a boolean matrix mat[M][N] of size M X N, modify it such that if a matrix cell mat[i][j] is 1 (or true) then make all the cells of ith row and jth column as 1.*/
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
	int b[m],c[m];
		for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		 {
		 if(a[i][j]==1)
		 {
		 	b[i]=1;
		 	c[j]=1    ;
		 }
	} }
	for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		 {
		 	if(b[i]==1 ||c[j]==1 )
				a[i][j]=1;
			}
			}
		  for(i=0;i<m;i++)
	{
		for(j=0;j<m;j++)
		cout<<a[i][j]<<" ";

	cout<<endl;    }
}
