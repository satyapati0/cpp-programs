#include<iostream>
#include<cmath>
using namespace std;


    class Power
    {
	int num, power, arm;
	
	public:
		Power(){
			num = 4;
			power = 4;
		       }

		Power(int a, int b){
				     num = a;
				     power = b;
				   }


//		Power(int a,int b=4);
		
		void showResult(){
				arm = pow(num,power);
				cout << "number "<<num<<"raised poert to "<<power<<" = "<<arm;
				 }
		~Power();
                  {
			cout <<"Destructor called";
       		     }

    };	

		//Power::~Power(){
                  //   {
			//cout <<"Destructor called";
       		     //}
     		
 
/*
      	Power::Power(int a, int b){
				    num = a;
				    power = b;
				  }
*/
  
    int main(){
		Power p1;
		Power p2(3,3);
		//Power p3(6);
		p1.showResult();
		p2.showResult();
		//p3.showResult();
		return 0;
	      }
