
#include<iostream>
using namespace std;
class Employee
{
	public:
			int id;
			string name;
			float salary;
			
			Employee(int id,string name,float salary)
			{
				this->id=id;
				this->name=name;
				this->salary=salary;
			}
			
		
			
			void display()
			{
				cout<<"Employee Id is -> "<<id<<endl;
				cout<<"Employee Name is -> "<<name<<endl;
				cout<<"Employee Salary is -> "<<salary<<endl;
			}
};
int main()
{
	cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
	
	Employee e1=Employee(1,"prince",35000);
	Employee e2=Employee(2,"aryan",32000);
	e1.display();
	e2.display();
	return 0;
}
