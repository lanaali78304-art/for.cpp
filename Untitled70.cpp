#include<iostream>
using namespace std;

int main()
{
	int n ;
	cout<<"Enter your num "<<endl ;
	cin>>n ;
	int sum = 0 ;
	for(int i=0 ; i<=n ; ++i)
	{
	sum+=i ;
		if(i % 2 ==0)
		{
		sum ;
		}
		else if(i % 2 !=0)
		{
			sum ;
			
		}
		cout<<"Even num "<<sum<<endl ;
		cout<<"Ood num "<<sum<<endl ;
	}
	
}
