#include<iostream>
using namespace std;

class Demo
{
	int n;
	char c;
	public:
		Demo(){}
		Demo(int d, char t){n=d; c=t;}
		void SDF(int n){
				cout << n;
				cout<<this->n;
			       }
		Demo setNum(int n){ this->n = n; return *this; }
		Demo setC(char c){ this->c = c; return *this; }
		void show(){ cout << "num = "<<n<<"\n char = "<<c; }
};

int main()
{
	Demo dd;
	dd.setNum(90).setC('A').show();
}
