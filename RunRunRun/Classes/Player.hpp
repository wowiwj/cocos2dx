//
//  Player.hpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#ifndef Player_hpp
#define Player_hpp

#include <cocos2d.h>
#include "Entity.hpp"
USING_NS_CC;


class Player : public Entity
{
public:
    CREATE_FUNC(Player);
    virtual bool init();
    
    void run();
    
};





#endif /* Player_hpp */
