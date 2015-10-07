//
//  Entity.cpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#include "Entity.hpp"

void Entity::BindSprite(cocos2d::Sprite *sprite)
{
    m_sprite = sprite;
    this->addChild(m_sprite);
}