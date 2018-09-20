// overloading of prefix increment operator using member function



#include<iostream>
using namespace std;

class Number
	{
	int n1,n2;
	
	public:
	    Number(int a, int b){ n1=a; n2=b; }
	    void show(){
			cout<<"n1="<<n1;
			cout<<"n2="<<n2;     }

	    Number operator ++(){
				    ++n1;
				    ++n2;     }  

	    Number operator ++(int){
					n1++;
					n2++;  }

	};

	
	int main()
	{
		Number n(10,15);
		n.show();
		++n;
		n.show();
	}


