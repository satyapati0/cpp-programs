// overloading of prefix increment operator using member function



#include<iostream>
using namespace std;

class Number
	{
	int n1,n2;
	
	public:
	    Number(int a, int b){ n1=a; n2=b; }
	    void show(){
			cout<<"n1="<<n1<<endl;
			cout<<"n2="<<n2<<endl;     }

	    friend Number operator +(Number&);
	    friend Number operator -(Number&);
	 //   friend Number operator ++(Number int);
	};
 
	Number operator +(Number &n){ cout<<"be positive";} 
	Number operator -(Number &n){cout<<"negative is accurate"; }
	
	int main()
	{
		Number n(10,15), n4(10,10), n5(20,21);
		n.show();
		+n;
		-n;
	//	n++;
	//	n.show();
	//	n4.show();
	//	++n4;
	//	n4.show();
	//	n5.show();
	//	n5++;
	//	n5.show();

	}


