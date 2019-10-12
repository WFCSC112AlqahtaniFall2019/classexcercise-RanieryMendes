//
// Created by Raniery Costa Mendes on 10/3/19.

#include <string>
#ifndef CLASSEXCERCISE_FACULTY_H
#define CLASSEXCERCISE_FACULTY_H

using namespace std;
class Faculty{


public:

    Faculty();
    Faculty (string name, string address, string ID);

    string id;
    string address;
    string DoB;
    string degree;
    string name;
//getter and setter for salary
    double getSalary() ;
    void setSalary(double salary);
/* 1) create a getter and setter for each variable in the class*/
    void setName (string userName);
    string getName();
    void setID (string id);
    string getID();
    void setAddress (string address);
    string getAddress() ;
    void setDoB (string DoB);
    string getDoB() ;
    void setDegree (string degree);
    string getDegree();
    void setSSN (double SSN);
    double getSSN() ;

private:
    double salary;
    double SSN;
};

#endif //CLASSEXCERCISE_FACULTY_H
