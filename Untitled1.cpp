#include<iostream>
using namespace std;

int main()
{
	int n ;
	int sum ;
	cout<<"Enter your n "<<"\n" ;
	cin>>n ;
	for(int s=1 ;s<=n ;s+=2)
	{
		sum = sum + s ;
	}
	{
		cout<<"sum = "<<sum<<"\n" ;
	}
}
