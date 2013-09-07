//
//  Lesson.cpp
//  something
//
//  Created by Alex Gievsky on 07.09.13.
//  Copyright (c) 2013 reenboog. All rights reserved.
//

#include "Lesson.h"
#include <iostream>

using namespace std;

Lesson::~Lesson() {
    cout << "Destructor of lesson" << endl;
}

Lesson::Lesson(float time, int room) {
    this->room = room;
    this->time = time;
    
    cout << "Lesson constructor" << endl;
}

float Lesson::getTime() {
    return this->time;
}

int Lesson::getRoom() {
    return this->room;
}

void Lesson::setTime(float time) {
    this->time = time;
}

void Lesson::setRoom(int room) {
    this->room = room;
}

void Lesson::printData() {
    cout << "Time - " << this->time << endl;
    cout << "Room - " << this->room << endl;
}
