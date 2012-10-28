//
//  main.cpp
//  October29
//
//  Created by Daniel Walsh on 10/28/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#include <iostream>
#include <cstdlib>
#include "Schooner.h"
#include "Dinghy.h"
#include "Clipper.h"
using namespace std;

int main()
{
    Schooner s(110, 68);
    Dinghy d(200,10);
    Clipper c(164, 277);
    
    s.Model();
    cout << "Length: " << s.getLength() << "ft\n";
    cout << "Height: " << s.getMast() << "ft\n";
    s.Beam();
    
    cout <<"\n";

    d.Model();
    cout << "Length: " << d.getLength() << "ft\n";
    cout << "Power: " << d.getPower() << "hp\n";
    d.Motor();
    
    cout <<"\n";
    
    c.Model();
    cout << "Length: " << c.getLength() << "ft\n";
    cout << "Height: " << c.getMast() << "ft\n";
    c.Beam();
    
    return EXIT_SUCCESS;
}

