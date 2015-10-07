//
//  Controller.hpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#ifndef Controller_hpp
#define Controller_hpp

#include <cocos2d.h>
#include "ControllerListener.hpp"

USING_NS_CC;

class Controller : public Node
{
public:
    //设置监听对象
    void setControllerListener(ControllerListener* controllerListener);
protected:
    ControllerListener* m_ControllerListener;
    
};




#endif /* Controller_hpp */
