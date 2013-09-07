//
//  Student.cpp
//  something
//
//  Created by Alex Gievsky on 06.09.13.
//  Copyright (c) 2013 reenboog. All rights reserved.
//

#include <iostream>

#include "Student.h"
#include "Lesson.h"

using namespace std;

Student::~Student() {
    cout << "destructor of a Student" << endl;
    
    delete lesson;
}

Student::Student() {
    this->age = 20;
    this->group = 10;
    
    this->lesson = new Lesson(100.0, 205);
}

Student::Student(int age, int group, float time, int room) {
    cout << "constructor of a Student" << endl;

    this->age = age;
    this->group = group;
    
    this->lesson = new Lesson(time, room);
}

void Student::printData() {
    cout << "student age is: " << this->age << endl;
    cout << "student group is: " << this->group << endl;
    
    lesson->printData();
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
