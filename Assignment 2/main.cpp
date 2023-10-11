#include "LinkedList.h"
#include "employee.h"
#include <string>

int main() {
    Linked<int> list;

    // push some elements
    list.push_back(45);
    list.push_front(13);
    list.push_back(7);
    list.push_front(2);

    // Print the list
    cout << "List: ";
    list.displayList();

    // Print front and back elements
    cout << "Front: " << list.front() << endl;
    cout << "Back: " << list.back() << endl;

    // Insert 56 at index 2
    list.insert(2, 56);

    // Print the list after insertion
    cout << "Aftering inserting 56 at index 2: ";
    list.displayList();

    // Remove at index 3
    list.remove(3);

    // Print the list after removal
    cout << "After removing element at index 3: ";
    list.displayList();

    // Pop front and back
    list.pop_back();
    list.pop_front();

    // Print the list after popping
    cout << "After popping back and front: ";
    list.displayList();

    // Find element in list
    cout << "Finding 56 in list: ";
    if (list.find(56) == 1) {
        cout << "Element in list found" << endl;
    }
    else {
        cout << "Element was not found" << endl;
    }

    cout << "Finding 20 in list: ";
    if (list.find(20) == 1) {
        cout << "Element in list found" << endl;
    }
    else {
        cout << "Element was not found" << endl;
    }

    // Check if the list is empty
    cout << "Is list empty? " << (list.empty() ? "Yes" : "No") << endl;


    // Test for employee classes
    Professional prof(30.0, 40);  // Professional employee with 30/hour rate and 40 hours worked
    Nonprofessional nonProf(22.0, 35);  // Nonprofessional employee with 20/hour rate and 35 hours worked

    // Outputs for Professional employee
    cout << "\n\nProfessional Employee" << endl;
    cout << "Weekly Salary: $" << prof.WeeklySalary() << endl;
    cout << "Healthcare Contributions: $" << prof.HealthContribution() << endl;
    cout << "Vacation Days: " << prof.VacationDays() << endl;

    // Outputs for Unprofessional employee
    cout << "\nNonprofessional Employee" << endl;
    cout << "Weekly Salary: $" << nonProf.WeeklySalary() << endl;
    cout << "Healthcare Contributions: $" << nonProf.HealthContribution() << endl;
    cout << "Vacation Days: " << nonProf.VacationDays() << endl;

    return 0;
}
