//
//  Dinghy.h
//  October29
//
//  Created by Daniel Walsh on 10/28/12.
//  Copyright (c) 2012 Daniel Walsh. All rights reserved.
//

#ifndef __October29__Dinghy__
#define __October29__Dinghy__

#include "Powerboat.h"

class Dinghy:public Powerboat
{
public:
    Dinghy (int p, int l);
    virtual void Model();
    //~Dinghy();
};

#endif /* defined(__October29__Dinghy__) */
