#include<iostream>
using namespace std;
int main()
{
	int stars=1; //Звезди
	int size=10; //големина на елхата

	for( int total=size;total>0;--total) 
	{
		for(int i=(total-1);i>0;--i) //за мястото
			cout<<" ";
		for(int j=0;j<stars;++j) //за звездите
			cout<<"* ";
		stars+=1;
		cout<<'\n';
	}
	return 0;
}
