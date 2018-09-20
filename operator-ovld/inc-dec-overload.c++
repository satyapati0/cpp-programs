#include<iostream>
using namespace std;

class Num
    {
	int n1,n2;
	
	public:
		Num()
		{

		Num(int a, int b){ n1=a;
				   n2=b; }

		friend Num operator ++(Num int);
		friend Num operator ++(int);
//		friend Num operator --(Num int);
	//	friend Num operator --(int);

		void show();
    };


	Num operator ++(Num n){
			    ++n.n1;
			    ++n.n2;
		              }

	Num operator ++(Num n1 int){
					n.n1++;
					n.n2++;
				   }


