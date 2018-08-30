#include<iostream>
using namespace std;
class Marks
{
	float math,sc;
public:

	void showMarks()
	{
		cout << "Math marks\t" << math <<"\n";
		cout << "science marks\t" << sc << "\n";
		cout << "\n";
	}
	
	Marks(int s1, int s2){
     		math = s1;
		sc = s2;
	}

/*
********************************

      **Copy constructor **
--------------------------------------------|
				            |
	Marks(Marks &m)			    |
		{			    |
			math = m.math;	    |
			sc = m.sc;          |
		}			    |
					    |
					    |
---------------------------------------------
*/

};


int main()
	{
		Marks m1(22,23),m2(34,45);


//		Marks m3(m1);                        copy constructor initialization
//		Marks m4 = m2;                       copy initialization


		m1.showMarks();
		m2.showMarks();
		m3.showMarks();
		m4.showMarks();		
		return 0;
	}









































































/*          **  Dummy Constructor Yields Garbage values as Math marks3.98821e-34science marks1.4013e-45Math marks-1.58527science marks-1.58527  ** 
-----------------------------------------------------------------------------------------------------------------------------------


	void showMarks()
	{
		cout << "Math marks" << math;
		cout << "science marks" << sc;
	}

};


int main()
	{
		Marks m1,m2;
		m1.showMarks();
		m2.showMarks();
		return 0;
	}


*/









/* ** Default constructor yields the values which are initialized ** 
---------------------------------------------------------------------------------------------------------------------------------


	Marks(){
		math = 0;
		sc = 0;
}

To build the class you need to simply declare the class as dummy constyructor



*/





/* **parameterized Constructor** 
------------------------------------------------------------------------------------------------------------------------

In this type of constructor the user supply the values against the properties of the class 

	Marks(int s1, int s2){
		math = s1;
		sc = s2;
}



To build the class
********************

Marks m1(11,22);

Here 11 is the value against the 1st arg and 22 for the 2nd


	Marks(int s1, int s2){
		math = s1;
		sc = s2;
}

Default constructor can be used along with parameterized constructor

as follows

	Marks(){
		math = 0;
		sc = 0;
}



	Marks(int s1, int s2){
		math = s1;
		sc = s2;
}
*/


/*
********************************

      **Copy constructor **
--------------------------------------------|
				            |
	Marks(Marks &m)			    |
		{			    |
			math = m.math;	    |
			sc = m.sc;          |
		}			    |
					    |
					    |
---------------------------------------------
*/











