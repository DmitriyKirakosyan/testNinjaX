//
//  Monster.cpp
//  Cocos2dxSimpleGameForiOS
//
//  Created by Dmitry Kirakosyan on 9/1/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

//#include <iostream>
#include "Monster.h"

using namespace cocos2d;

Monster* WeakAndFastMonster::monster()
{
    Monster* monster = new Monster();
    monster->initWithFile("Target.png");
    
    monster->setCurHp(1);
    monster->setMinMoveDuration(3);
    monster->setMaxMoveDuration(5);
    
    return monster;
}

Monster* StrongAndSlowMonster::monster()
{
    Monster* monster = new Monster();
    monster->initWithFile("Target2.png");
    
    monster->setCurHp(3);
    monster->setMinMoveDuration(6);
    monster->setMaxMoveDuration(12);
    
    return monster;
}


