/*Find the element that appears once
Given an array where every element occurs three times, except one element which occurs only once.
Find the element that occurs once. Expected time complexity is O(n) and O(1) extra space. */
#include<bits/stdc++.h>
#define INT_SIZE 32
using namespace std;
int main()
{
	int a[]= {2,2,2,2,2,3,3,3,3,3,5} ;
	int s,x,r=0;
	for(int i=0;i<INT_SIZE;i++)
	{
	s=0;
	x=1<<i;
		for(auto j:a)
		{
			if(j&x)
			s+=1;
		}
		if(s%5)
		r=r|x;
	}
	cout<<r;
}
