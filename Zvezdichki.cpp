#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
	int stars=1; //Звезди
	int size; //големина на елхата
	cout<<"Enter N:";
	cin>>size;
	if (size>40) //Проверка
	{
	   cout<<"Error!";
	   cout<<"Max:40";
	}
	else
	{
	 for( int total=size;total>0;--total)
    	{
		for(int i=(total-1);i>0;--i) //за мястото
			cout<<" ";
		for(int j=0;j<stars;++j) //за звездите
			cout<<"* ";
		stars+=1;
		cout<<endl;
    	}
	}
	cout<<endl;
	system ("PAUSE");
	return 0;
}
