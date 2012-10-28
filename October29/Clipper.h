//
//  Clipper.h
//  October29
//
//  Created by Daniel Walsh on 10/28/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#ifndef __October29__Clipper__
#define __October29__Clipper__

#include "Sailboat.h"

class Clipper:public Sailboat
{
public:
    Clipper(int m, int l);
    virtual void Model();
    virtual void Beam();
};

#endif /* defined(__October29__Clipper__) */
