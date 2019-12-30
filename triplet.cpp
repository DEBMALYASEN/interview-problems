/*Given an array of distinct elements. The task is to find triplets in array whose sum is zero.*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[]={0,-1,2,-3,1},x,l,u;
	sort(begin(a),end(a));
	bool found=true;
	for(int i=0;i<=3;i++)//i<=n-2
	{
	x=a[i];
	l=i+1;
	u=4;
	while(u>l)
	{
		if(a[l]+a[u]+x==0)
	   {
		   	cout<<a[l]<<" "<<a[u]<<" "<<x<<endl;
		   	l++;
		   	u--;
		   	found=true;
	   }
		else if(a[l]+a[u]+x<0)
		l++;
		else
		u--;
	}
	}
		if(found==false)
		cout<<"not found";
}
