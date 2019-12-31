/* Turn off right most set bit */
#include<iostream>
using namespace std;
int main()
{
	int x ;
	cin>>x;
	cout<<(x&(x-1));
}
