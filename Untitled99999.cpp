#include<iostream>
using namespace std;

int main()
{
	int n ;
	cout<<"Enter your num "<<endl ;
	cin>>n ;
	int even_count =0 ;
	int ood_count =0 ;
	int sum =0 ;
	for(int i =1 ;i<=n ;i++)
	
		{
			sum+=i ;
{
	even_count++ ;	
	}
	{
		ood_count++ ;
	}
}
	cout<<"Even num "<<even_count<<endl ;
	cout<<"Ood num "<<ood_count<<endl ;
	cout<<"Total sum "<<sum<<endl ;
}
