/* Two pointers is really an easy and effective technique which is typically used for searching pairs in a sorted array.  */
/*Given a sorted array A (sorted in ascending order), having N integers,
find if there exists any pair of elements (A[i], A[j]) such that their sum is equal to X.   */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={10,20,35,50,75,80};
	int l=0,u=5;
	int x;
	cin>>x;
	while(u>l)
	{
		if(a[l]+a[u]==x)
		{
		 cout<<"found "<<a[l]<<" "<<a[u];
		 return 0;
    	}
    	else if(a[l]+a[u]<x)
    	l++;
    	else
    	u--;
	 }
	 cout<<"not found";
	 return 0;
}
