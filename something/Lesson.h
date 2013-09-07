//
//  Lesson.h
//  something
//
//  Created by Alex Gievsky on 07.09.13.
//  Copyright (c) 2013 reenboog. All rights reserved.
//

#ifndef __something__Lesson__
#define __something__Lesson__

/* 
    alex_gievsky
*/

class Lesson {
private:
    float time;
    int room;
public:
    ~Lesson();
    Lesson(float time, int room);
    
    void getTime();
    void getRoom();
    
    float setTime(float time);
    int setRoom(int room);
    
    void printDate();
};

#endif /* defined(__something__Lesson__) */
