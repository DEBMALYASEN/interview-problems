/*Find the element that appears once
Given an array where every element occurs two times, except one element which occurs only once.
Find the element that occurs once. Expected time complexity is O(n) and O(1) extra space. */
#include<bits/stdc++.h>
using namespace std;
int main()
{
	int a[7]= {2,2,3,3,5} ;
	int x=0;
	for(auto i:a)
	x=x^i;
	cout<<" "<<x;
}
