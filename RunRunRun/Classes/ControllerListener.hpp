//
//  ControllerListener.hpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#ifndef ControllerListener_hpp
#define ControllerListener_hpp

#include <stdio.h>

#include <cocos2d.h>

USING_NS_CC;

class ControllerListener
{
public:
    
    //设置目标坐标
    virtual void setTagPosition(int x,int y) = 0;
    
    //获取目标坐标
    virtual Point getTagPosition() = 0;
    
    
    
    
};


#endif /* ControllerListener_hpp */
