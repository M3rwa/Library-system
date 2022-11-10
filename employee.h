// ======================================================================================================
// Classes for our Employees and Two classes for our two types of Employee(Fixed Employess and Dynamic)
// ======================================================================================================

#include <iostream>
using namespace std;

class Employee
{
protected:
    string name;
public:
    string get_name() {
        return name;
    }
};

class FixedEmployee : public Employee
{
public:
    string features = "Life long contract";
    FixedEmployee(string name)
    {
        this->name = name;
    }
};

class DynamicEmployee : public Employee
{
public:
    string features = "Daily payment";
    DynamicEmployee(string name)
    {
        this->name = name;
    }
};
