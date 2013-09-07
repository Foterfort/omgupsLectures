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
    
    float getTime();
    int getRoom();
    
    void setTime(float time);
    void setRoom(int room);
    
    void printDate();
};

#endif /* defined(__something__Lesson__) */
