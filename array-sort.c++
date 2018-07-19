#include<iostream>
using namespace std;
int arrSort(int a[],int size)
{
	int i=0,t;
	if(a[0]>a[1])
	{
		t=a[0];
		a[0]=a[1];
		a[1]=t;
	}
	arrSort(a[],size-2);
	cout << a[] ;
}

int main()
{
	arrSort({2,3,45,1},4);
}

