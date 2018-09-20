#include<iostream>
using namespace std;

class Demo
{
	int n;
	public:
		Demo(int d){n=d;}
		void SDF(int n){
				cout << n;
				cout<<this->n;
			       }
};

int main()
{
	Demo dd(12);
	dd.SDF(14);
}
