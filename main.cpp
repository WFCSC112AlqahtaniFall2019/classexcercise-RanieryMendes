#include <iostream>
#include <string>
#include "Faculty.h"

using namespace std;


/* 2) implement each setter and getter */

int main() {
    Faculty prof;

    string id;
    string address;
    string DoB;
    string degree;
    string name;
    double salary;
    double SSN;

/* 3) use the implemented methods to fill prof' info and print them out */

    cout << "Enter your name: " << endl;
    cin >> name;
    prof.setName(name);
    cout << "Enter your id: " << endl;
    cin >> id;
    prof.setID(id);


    cout << "Enter your DoB: " << endl;
    cin >> DoB;
    prof.setDoB(DoB);

    cout << "Enter your degree: " << endl;
    cin >> degree;
    prof.setDegree(degree);
    cout << "Enter your SSN: " << endl;
    cin >> SSN;
    prof.setSSN(SSN);
    cout << "Enter your salary: " << endl;
    cin >> salary;
    prof.setSalary(salary);
    cout << endl;
    cout << "Enter your address: " <<endl ;
    getline( cin, address);
    prof.setAddress(address);
    cout << endl;

    cout << endl;

    cout << "Your info is: " << endl;
    cout << prof.getName() << " ID:" << prof.getID() << " DoB: " << prof.getDoB() << endl << "Address: " << prof.getAddress()
         << " degree: " << prof.getDegree() << endl <<  " salary:" << prof.getSalary() << "  SSN: " << prof.getSSN();

    return 0;

}
