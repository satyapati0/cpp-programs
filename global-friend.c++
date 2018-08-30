#include<iostream>
using namespace std;
class Two;
class One
{
	private:
		int a;
	public:
		void setOne(int x){ a = x; }
		void dispOne(){ cout << "one::a="<<a; }
		friend int addBoth(One &, Two &);
};



class Two
{
	int b;
	public:
		void setTwo(int y){ b = y; }
		void dispTwo(){ cout << "Two::b="<<b; }
		friend int addBoth(One &, Two &);
};



	int addBoth(One &o, Two &t)
	{
		return o.a+t.b;
	}

	int main(){
			One o1;
			Two t1;
			o1.setOne(10);
			t1.setTwo(20);
			o1.dispOne();
			t1.dispTwo();
			cout << "One :: a + Two :: b = "<<addBoth(o1,t1);
			return 0;
		  }
