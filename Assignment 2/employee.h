#pragma once
#include <iostream>
using namespace std;

class Employee {
protected:
	double hourlyRate;
	int hoursWorked;

public:
	Employee(double rate, int hours);
	virtual double WeeklySalary() const = 0;
	virtual double HealthContribution() const = 0;
	virtual double VacationDays() const = 0;
};

class Professional : public Employee {


public:
	Professional(double rate, int hours);
	double WeeklySalary() const override;
	double HealthContribution() const override;
	double VacationDays() const override;
};

class Nonprofessional : public Employee {

public:
	Nonprofessional(double rate, int hours);
	double WeeklySalary() const override;
	double HealthContribution() const override;
	double VacationDays() const override;
};



