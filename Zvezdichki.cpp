#include<iostream>
using namespace std;
int main()
{
	int stars=1; //������
	int size=10; //�������� �� ������

	for( int total=size;total>0;--total) 
	{
		for(int i=(total-1);i>0;--i) //�� �������
			cout<<" ";
		for(int j=0;j<stars;++j) //�� ��������
			cout<<"* ";
		stars+=1;
		cout<<'\n';
	}
	return 0;
}
