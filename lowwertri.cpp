/* islower triangular */
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
		for(j=i+1;j<m;j++)
		{
		if(a[i][j]!=0)
		{      cout<<"not";
		return 0;
        }
	}

	}
	cout<<"false";
	/*for (int i = 1; i < N; i++)
        for (int j = 0; j < i; j++)
            if (mat[i][j] != 0)
                return false;  upper triangular */
}
