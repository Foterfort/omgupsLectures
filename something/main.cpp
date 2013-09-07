//
//  main.cpp
//  something
//
//  Created by Alex Gievsky on 06.09.13.
//  Copyright (c) 2013 reenboog. All rights reserved.
//

/*
 1 runner
 2 tripple town
 3 zooma
 4 lines
 5 tower defense
 6 angry birds
*/

#include <iostream>
#include "Student.h"

using namespace std;

int main(int argc, const char * argv[]) {
    Student olga;

    Student *ivan;
    
    {
        ivan = new Student();
    }
    

    cout << "tadaa" << endl;
    
    delete  ivan;

    return 0;
}

