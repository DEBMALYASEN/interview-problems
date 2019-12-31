/*multioly with 3.5 */
/* (8x-x)/2
   (x*2^3-x)/2^1 */
#include<iostream>
using namespace std;
int main()
{
	int x ;
	cin>>x;
	cout<<(((x<<3)-x)>>1);
}
