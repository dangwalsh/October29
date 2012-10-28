//
//  Powerboat.h
//  October29
//
//  Created by Daniel Walsh on 10/28/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#ifndef __October29__Powerboat__
#define __October29__Powerboat__

#include "Boat.h"

class Powerboat:public Boat
{
protected:
    int power;
    
public:
    int getPower();
    void Motor();
};

#endif /* defined(__October29__Powerboat__) */
