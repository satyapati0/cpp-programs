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

		friend A operator +(A &a1,A &b);

};

		A operator +(A &a, A &c){ A t; t.a = a.a + c.a; t.b = a.b + c.b; return t; }

int main()
{
	A a(10,11),b(15,18),c(A &c);
	a.show();
	b.show();
	a = a+b;
	a.show();
}
