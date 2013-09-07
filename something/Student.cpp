//
//  Student.cpp
//  something
//
//  Created by Alex Gievsky on 06.09.13.
//  Copyright (c) 2013 reenboog. All rights reserved.
//

#include "Student.h"
#include <iostream>

using namespace std;

Student::~Student() {
    cout << "destructor of a Student" << endl;
}

Student::Student() {
    this->age = 20;
    this->group = 10;
}

Student::Student(int age, int group) {
    cout << "constructor of a Student" << endl;

    this->age = age;
    this->group = group;
}

void Student::printData() {
    cout << "student age is: " << this->age << endl;
    cout << "student group is: " << this->group << endl;
}

int Student::getAge() {
    return this->age;
}

void Student::setAge(int age) {
     this->age = age;
}

int Student::getGroup() {
    return this->group;
}

void Student::setGroup(int group) {
    this->group = group;
}
