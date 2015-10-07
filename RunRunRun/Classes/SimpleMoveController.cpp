//
//  SimpleMoveController.cpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#include "SimpleMoveController.hpp"


bool SimpleMoveController::init()
{
    this->m_iSpeed = 0;
    
    this->scheduleUpdate();
    
    return true;
}

void SimpleMoveController::update(float dt)
{

    if (m_ControllerListener == NULL) {
        return;
    }

    Point pos = m_ControllerListener->getTagPosition();
    pos.x += m_iSpeed;
    m_ControllerListener->setTagPosition(pos.x, pos.y);


}

void SimpleMoveController::setiSpeed(int iSpeed)
{
    
    
    this->m_iSpeed = iSpeed;
}