#include<iostream>
using namespace std;
class A
{
	int a,b;
	public:
		A(){}
		A(int s,int t){ a=s; b=t; }
		A(A &x) { a=x.a; b=x.b; }
		void show(){ cout << "a = "<< a;
			     cout << "b = "<< b;  }

		A operator +(A a1){ A t; t.a = a+a1.a; t.b = b+a1.b; return t; }
};

int main()
{
	A a(10,11),b(15,18),c(A &c);
	a.show();
	b.show();
	a = a+b;
	a.show();
}
