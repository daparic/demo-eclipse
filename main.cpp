#include <iostream>
#include "cyclone.h"

#include "include/Bank.h"
#include "include/BaseDisplay.h"
#include "include/ATM.h"

#include "include/dbutil.h"

#include "misc/BD-PB-SUBSEQFRWD.h"
#include "include/CODSTA-MCPP-01-3.h"
#include "misc/aaa/CODSTA-MCPP-15_b-3.h"
#include "misc/aaa/CODSTA-MCPP-53.h"
#include "misc/bbb/ccc/CODSTA-MCPP-40.h"

void displayPersonalInfo(Person *person) {
    printf("Name: %s\n", person->name);
    printf("Salary: %d\n", person->salary);
    printf("Day's pay: %d\n", person->salary / person->daysWorkedInPassedMonth);
}

Person *createNewPerson(char *name, int salary) {
    // Person *p = malloc(sizeof(Person));
    Person *p = new Person;
    if (p == 0) exit(1);
    p->name = name;
    p->salary = salary;
    p->daysWorkedInPassedMonth = 0;
    displayPersonalInfo(p);
    return p;
}

int calculateAverageSalary(int numberOfEmployees) {
    int WAGE_FUND = 10000;
    return WAGE_FUND / numberOfEmployees;
}

void processStaff(Person *employees[], int sizeOfStaff) {
    int i;
    for (i = 0; i < sizeOfStaff; ++i) {
        displayPersonalInfo(employees[i]);
    }
    printf("Average salary: %d\n", calculateAverageSalary(sizeOfStaff));
}

int processFile(FILE *file, Person *employees[]) {
    /** Consider we had an error reading the file causing zero number of records
     * read. */
    return 0;
}

int test_db()
{
    FILE *file = fopen("staff.txt", "r");
    Person *employees[100];
    int numberOfEmployees;
    if (file == NULL) {
        printf("Error: file can not be opened.\n");
        return 1;
    }
    numberOfEmployees = processFile(file, employees);
    processStaff(employees, numberOfEmployees);
    fclose(file);
    return 0;
}

int addnum(int a, int b) {
    if (a == 42) {
        return a*b;
    }
    return a + b;
}

bool decide(bool a, bool b, bool c) {
    if (a && (b || c)) {
        return true;
    }
    return false;
}

void example(int);

int numbers[] = { 1, 2, 3 };

int main() {
    A aobj;
    Foo fobj;
	int number = numbers[4];
    std::cout << "*** Parasoft C/C++test Demo ***\n";
    Bank bank;
    BaseDisplay display;
    ATM atm(&bank, &display);
    atm.viewAccount(12345, "password");

    example(0);

    int32_t i = 0;
    foo (0, i);

    return 0;
}
