#include<iostream>
using namespace std;

class employee
        {
                private:
                        char empid[5], cases;
                        char empname[20];
                        float net_salary, basic_salary, DA, MA, HRA;
                
                public:                                     
                        void empInfoEntry();
                        void empInfoDisplay();
                        void cAlc();      
        };
        
                
                 
        void employee::empInfoEntry()
                {
                        cout << "pls enter the name of the employee";
                        cin >> empname;
                        cout << "pls enter employee id";
                        cin >> empid;
                                                
                        cout << "Enter the basic salary";
                        cin >> basic_salary;
                        
                        if(basic_salary == 10000)
                                {
                                        cases = 'a';
                                }
                                
                        else if(basic_salary > 10000 && basic_salary <= 15000)
                                {
                                        cases = 'b';
                                }
                                
                        else if(basic_salary > 15000)
                                {
                                        cases = 'c';
                                }
                                
                        
                        switch(cases)
                                {
                                        case 'a': DA = basic_salary * 0.5/100;
                                                  MA = basic_salary * 0.6/100;
                                                  HRA = basic_salary * 0.7/100;
                                                  break;
                                        
                                        case 'b': DA = basic_salary * 0.6/100;
                                                  MA = basic_salary * 0.7/100;
                                                  HRA = basic_salary * 0.8/100;
                                                  break;
                                                  
                                        case 'c': DA = basic_salary * 0.7/100;
                                                  MA = basic_salary * 0.8/100;
                                                  HRA = basic_salary * 0.9/100;
                                                  break;
                                }
                                
                }
               
          
        
        void employee::empInfoDisplay()
                {
                        cout << " The details of employees are ";
                        cout << "Name:\t" << empname << "Employee id:\t" << empid << "net salary:\t" << basic_salary + DA + MA + HRA;
                }
                
                
        int main()
                {
                        int i,n;
                        employee emp[100];
                        cout << " Please enter the number of records you want to store\n";
                        cin >> n;
                        cout << " Please enter the records you want to store\n";
                        for(i=0;i<n;i++)
                                {
                                        emp[i].empInfoEntry();
                                }
                        
                        cout << "Your records are";
                        for(i=0;i<n;i++)
                                {                                                                             
                                        emp[i].empInfoDisplay();
                                }
               }
