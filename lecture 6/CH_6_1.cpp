#include <iostream>
using namespace std;

class Admin
{
    protected:
    string company_name;
    int manager_salary;
    int employee_salary;
    int total_staff;
    int	total_annual_revenue;
    bool can_terminate;

    public:
    Admin(string name, int mSalary, int eSalary, int staff, int revenue, bool terminate):company_name(name), manager_salary(mSalary), employee_salary(eSalary), total_staff(staff),total_annual_revenue(revenue), can_terminate(terminate) {}

    void myAccess() 
	{
        cout<<"Company Name: " << company_name << endl;
        cout<<"Manager Salary: " << manager_salary << endl;
        cout<<"Employee Salary: " << employee_salary << endl;
        cout<<"Total Staff: " << total_staff << endl;
        cout<<"Total Annual Revenue: " << total_annual_revenue << endl;
        cout<<"Can Terminate: " << (can_terminate ? "Yes" : "No") << endl;
    }
};

class Manager:public Admin 
{
    public:
    Manager(string name, int mSalary, int eSalary, int staff, int revenue, bool terminate):Admin(name, mSalary, eSalary, staff, revenue, terminate)  {}

    void myAccess()
	{
        Admin::myAccess(); 
    }
};

class Employee:public Manager
{
   public:
   Employee(string name, int mSalary, int eSalary, int staff, int revenue, bool terminate):Manager(name, mSalary, eSalary, staff, revenue, terminate) {}

    void myAccess() 
	{
        Admin::myAccess(); 
    }
};
int main()
{
    Employee emp("ghevariya infotech", 40000, 18000, 100, 100000, true);
    emp.myAccess();
    return 0;
}

