#include<iostream>
#include<cmath>
using namespace std;
int power1(int a, int b)
{
	cout << pow(a,b);
}
int power2(float a, int b)
{
	cout << pow(a,b);
}

int main()
{
power1(3,4);
cout << "\n";
power2(2.2,2);
return 0;
}
