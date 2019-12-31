/*Detect if two integers have opposite signs
Given two signed integers, write a function that returns
true if the signs of given integers are different, otherwise false */
#include<iostream>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	if((a^b)>>31)
	cout<<"true";
	else
	cout<<"false";//>>31
}
