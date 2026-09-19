#include<iostream>
using namespace std;
class Employee
{
public:
    virtual double calculateSalary()
    {
    cout<<"Base Employee Salary Calculation Called." << endl;
    return 0;
    }
};
class PermanentEmployee : public Employee
{
private:
    double basicSalary;
    double bonus;
public:

    PermanentEmployee(double bs, double b)
    {
    basicSalary = bs;
    bonus = b;
    }

    double calculateSalary()
    {
    return basicSalary + bonus;
    }
};
class ContractEmployee : public Employee
{
private:
    double hourlyRate;
    int hoursWorked;
public:
    ContractEmployee(double hr, int hw)
    {
    hourlyRate = hr;
    hoursWorked = hw;
    }

    double calculateSalary()
    {
    return hourlyRate * hoursWorked;
    }
};

int main()
{
    Employee* emp;
    PermanentEmployee p1(410000, 15000);
    ContractEmployee c1(8100, 130);
    
    emp = &p1;
    cout<<"Permanent Employee Salary: "<< emp->calculateSalary()
         << endl;
    emp = &c1;
    cout<<"Contract Employee Salary: " << emp->calculateSalary() << endl;

    return 0;
}
