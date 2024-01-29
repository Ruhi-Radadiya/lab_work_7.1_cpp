//- company_name
//- manager_salary
//- employee_salary
//- total_staff
//- total_annual_revenue
//- can_terminate
#include<iostream>
using namespace std;

class Admin{
	string company_name;
	int manager_salary;
	int employee_salary;
	
	public :
		void setData()
		{
			cout<<"Enter Company name: ";
			cin>>company_name;
			cout<<"Enter the salary of manager: "; 
			cin>>manager_salary;
			cout<<"Enter the salary of employee: "; 
			cin>>employee_salary;
			cout<<"__________________________________________"<<endl;;
		}
		void getData()
		{
			cout<<"The Name of Company is: "<<company_name<<endl;
			cout<<"The salary of manager is: "<<manager_salary<<endl;
			cout<<"The salary of employee is: "<<employee_salary<<endl;
			cout<<"_________________________________________"<<endl;
		}
	};

class Manager : public Admin	
{
			int total_staff,total_annual_revenue;
			public :
				void setM()
			{
			        cout<<"Enter total quantity of the staff:  ";
				    cin>>total_staff;
					cout<<"Enter the total annual revenue of the company: "; 
					cin>>total_annual_revenue;
					cout<<"____________________________________________"<<endl;
			}
			void getM()
			{
					 cout<<"The quantity of staff eis: "<<total_staff<<endl;
					 cout<<"The total annual revenue of company is: "<<total_annual_revenue<<endl;
					 cout<<"___________________________________________"<<endl;
			}
};

class Employee : public Manager
{
			string can_terminate;
			public :
				void setD()
				{
				   cout<<"Enter compnay terminated: ";
				   cin>>can_terminate;
				   cout<<"____________________________________________"<<endl;
				}
				void getD()
				{
					cout<<"compnay terminated is: "<<can_terminate<<endl;
				}
};
main()
{
	Admin A;
	Manager M;
	Employee E;
	A.setData();
	A.getData();
	M.setM();
	M.getM();
	E.setD();
	E.getD();
	
}