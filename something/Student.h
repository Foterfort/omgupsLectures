//
//  Student.h
//  something
//
//  Created by Alex Gievsky on 06.09.13.
//  Copyright (c) 2013 reenboog. All rights reserved.
//

#ifndef __something__Student__
#define __something__Student__

class Lesson;

class Student {
public:
    ~Student();

    Student(int age, int group, float time, int room);
    Student();
    
    void printData();

    void setAge(int age);
    void setGroup(int group);

    int getAge();
    int getGroup();
private:
    int age;
    int group;
    
    Lesson *lesson;
};

#endif /* defined(__something__Student__) */
