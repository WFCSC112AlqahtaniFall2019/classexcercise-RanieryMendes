//
// Created by Raniery Costa Mendes on 10/3/19.

#include <string>
#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H

using namespace std;
class Faculty{
    Faculty();
    Faculty (string name)

public:
    string name;
    string id;
    string address;
    string DoB;
    string degree;
//getter and setter for salary
    double getSalary() {return salary;}
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/
    void setName (string userName);
    string getName() {return name;}
    void setID (string id);
    string getID() {return id;}
    void setAddress (string address);
    string getAddress() {return address;}
    void setDoB (string DoB);
    string getDoB() {return DoB;}
    void setDegree (string degree);
    string getDegree() {return degree;}
    void setSSN (double SSN);
    double getSSN() {return SSN;}

private:
    double salary;
    double SSN;
};

#endif //CLASSEXCERCISE_FACULTY_H
