//
//  Controller.cpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#include "Controller.hpp"

#include <cocos2d.h>



USING_NS_CC;

void Controller::setControllerListener(ControllerListener *controllerListener)
{
    this->m_ControllerListener = controllerListener;
}