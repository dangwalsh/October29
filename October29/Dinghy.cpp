//
//  Dinghy.cpp
//  October29
//
//  Created by Daniel Walsh on 10/28/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#include "Dinghy.h"
using namespace std;

Dinghy::Dinghy (int p, int l)
{
    power = p;
    length = l;
}

void Dinghy::Model()
{
    cout << "Zodiac, Dinghy\n";
}

void Powerboat::Motor()
{
    cout << "Motor: Outboard\n";
}
