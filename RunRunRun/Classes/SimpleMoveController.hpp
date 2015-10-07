//
//  SimpleMoveController.hpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#ifndef SimpleMoveController_hpp
#define SimpleMoveController_hpp

#include <cocos2d.h>
#include "Controller.hpp"
USING_NS_CC;


class SimpleMoveController : public Controller
{

public:
    CREATE_FUNC(SimpleMoveController);
    virtual bool init();
    
    virtual void update(float dt);
    
    //设置移动速度
    
    void setiSpeed(int iSpeed);
    
private:
    int m_iSpeed;

};





#endif /* SimpleMoveController_hpp */
