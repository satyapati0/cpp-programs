#include<iostream>
using namespace std;
class A
    {
	int a;

	public:
		void setA(int x){
				a = x;
				}

		void dispA(){
				cout << "values of a = "<<a;
			    }

                friend void decrementA(A &);
    };

	


	void decrementA(A &a){
				a.a--;
				cout<<"Decremented valuev of a "<<a.a;
//				return a;
			     }

	int main()
		{
			A ob;
			ob.setA(10);
			ob.dispA();
			decrementA(ob);
			ob.dispA();

		}
