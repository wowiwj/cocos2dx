//
//  Entity.hpp
//  RunRunRun
//
//  Created by wangju on 15/10/7.
//  Copyright © 2015年 com.wangju.run01. All rights reserved.
//

#ifndef Entity_hpp
#define Entity_hpp

#include <cocos2d.h>
#include "ControllerListener.hpp"
#include "Controller.hpp"

USING_NS_CC;


class Entity : public Node,public ControllerListener
{
    
public:
    //绑定精灵
    void BindSprite(Sprite* sprite);
    //设置控制器
    
    void setController(Controller* controller);
    
    //实现SimpleMoveLisrener接口方法
    
    virtual void setTagPosition(int x,int y);
    virtual Point getTagPosition();
    
    
protected:
    Sprite* m_sprite;
    
    Controller* m_Controller;

};



#endif /* Entity_hpp */
