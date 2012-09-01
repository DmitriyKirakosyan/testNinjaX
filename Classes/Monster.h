//
//  Monster.h
//  Cocos2dxSimpleGameForiOS
//
//  Created by Dmitry Kirakosyan on 9/1/12.
//  Copyright 2012 __MyCompanyName__. All rights reserved.
//

#ifndef Cocos2dxSimpleGameForiOS_Monster_h
#define Cocos2dxSimpleGameForiOS_Monster_h

#include "cocos2d.h"


class Monster : public cocos2d::CCSprite
{
private:
    int _curHp;
    int _minMoveDuration;
    int _maxMoveDuration;
    
public:
    int getCurHp() const { return _curHp; }
    int getMinMoveDuration() const { return _minMoveDuration; }
    int getMaxMoveDuration() const { return _maxMoveDuration; }
    
    void setCurHp(int value) { _curHp = value; }
    void setMinMoveDuration(int value) { _minMoveDuration = value; }
    void setMaxMoveDuration(int value) { _maxMoveDuration = value; }
};

class WeakAndFastMonster : Monster
{
public:
    static Monster* monster();
};

class StrongAndSlowMonster : Monster
{
public:    
    static Monster* monster();    
};


#endif
