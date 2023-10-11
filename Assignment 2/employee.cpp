#include "employee.h"

// Employee constructor
Employee::Employee(double rate, int hours) : hourlyRate(rate), hoursWorked(hours) {}

// Professional constructor
Professional::Professional(double rate, int hours) :Employee(rate, hours) {}

// returns weekly salary
double Professional::WeeklySalary() const {
	return hourlyRate * hoursWorked;
}

// returns the health care contributions for the week
double Professional::HealthContribution() const {
	return 100.0;
}

// calculates vacation days earned
double Professional::VacationDays() const {
	return hoursWorked / 35;    // condition: earn one vacation day per 35 hours worked
}

// Nonprofessional implementation
Nonprofessional::Nonprofessional(double rate, int hours) :Employee(rate, hours) {}

// calculates weekly salary
double Nonprofessional::WeeklySalary() const {
	return hourlyRate * hoursWorked;
}

// returns the health care contributions for the week
double Nonprofessional::HealthContribution() const {
	return 50.0;
}

// calculates vacation days earned
double Nonprofessional::VacationDays() const {
	return hoursWorked / 35;  // condition: earn one vacation day per 35 hours worked
}
