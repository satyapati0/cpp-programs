#include<iostream>
#include<cmath>
using namespace std;
class ABC;

class XYZ
{
int x;
float num;
char ch;

	public:
		XYZ(){
			ch = 'A';
			num = 121.567;
			x = 67;
		     }
		friend class ABC;
};


	class ABC
		{
		public:
			void dispXYZ(XYZ obj){
						cout<<"char value of character in xyz" << obj.ch;
						cout << "int value in xyz" << obj.x;
						cout << "float value in xyz"<<obj.num;
					     }

			void calcXYZ(XYZ obj){
						cout << "ascii val of ch"<<int(obj.ch);
						cout << "ceil val of float"<<ceil(obj.num);
						cout << "incremented val of int"<<obj.x++;
					     }
		};


	int main()
		{
			ABC a;
			XYZ x;
			a.dispXYZ(x);
			a.calcXYZ(x);
		}





























